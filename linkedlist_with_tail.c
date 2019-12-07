#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int v;
    struct _node *next;
} Node;

typedef struct _list
{
    Node *head;
    Node *tail;
} List;

void add(List *list, int num);
void prtlist(List *list);
void delnodefromlist(List *list, int num);
void freelist(List *list);

int main(int argc, char *argv[])
{

    //Node *head = NULL;
    List list;
    list.head = NULL;
    list.tail = NULL;

    int num;
    while (1)
    {
        scanf("%d", &num);

        //break out if 99 inputed
        if (num == 99)
        {
            break;
        }

        add(&list, num);
    }

    //show all list contant
    prtlist(&list);

    scanf("%d", &num);

    //delete a node
    delnodefromlist(&list, num);

    prtlist(&list);

    freelist(&list);

    prtlist(&list);

    return 0;
}

void freelist(List *list)
{
    Node *q;
    q = NULL;
    while (list->head)
    {
        q = list->head->next;
        free(list->head);
        list->head = q;
    }

    list->tail = NULL;
    //list = NULL;
}

void delnodefromlist(List *list, int num)
{
    Node *q, *t;
    q = NULL;
    t = NULL;
    t = list->head;
    while (t)
    {
        if (t->v == num)
        {
            if (q == NULL)
            {
                list->head = t->next;
            }
            else
            {
                q->next = t->next;
            }

            if (t == list->tail)
            {
                list->tail = q;
            }

            free(t);
            break;
        }
        q = t;
        t = t->next;
    }
}

void prtlist(List *list)
{
    if (list->head)
    {
        Node *t;
        t = list->head;
        printf("head is %p \n", t);
        while (t)
        {
            printf("%d -> ", t->v);
            t = t->next;
        }

        printf("\n");

        printf("head: %d\n", list->head->v);
        printf("tail: %d\n", list->tail->v);
    }
    else
    {
        printf("nothig is list.\n");
    }
}

void add(List *list, int num)
{

    Node *n = malloc(sizeof(Node));
    n->v = num;
    n->next = NULL;

    if (list->head == NULL)
    {
        list->head = n;
        list->tail = n;
    }
    else
    {
        list->tail->next = n;
        list->tail = n;
    }
}