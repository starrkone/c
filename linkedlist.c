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
} List;

void addtolist(List *list, int num);
void prtlist(List *list);

int main(int argc, char *argv[])
{

    //Node *head = NULL;
    List list;
    list.head = NULL;

    int num;
    while (1)
    {
        scanf("%d", &num);

        //break out if 99 inputed
        if (num == 99)
        {
            break;
        }

        addtolist(&list, num);
    }

    //show all list contant
    prtlist(&list);

    scanf("%d", &num);

    Node *t = list.head;
    int flg = 0;
    while (t)
    {
        if ((flg = (num == t->v)))
        {
            printf("Find it!\n");
            break;
        }
        t = t->next;
    }

    if (flg == 0)
    {
        printf("Not Found!\n");
    }

    return 0;
}

void prtlist(List *list)
{
    Node *t;
    t = list->head;

    while (t)
    {
        printf("%d -> ", t->v);
        t = t->next;
    }

    printf("\n");
}

void addtolist(List *list, int num)
{
    //get tail of list
    Node *tracker;
    tracker = list->head;

    while (tracker && tracker->next)
    {
        tracker = tracker->next;
    }

    Node *n = malloc(sizeof(Node));
    n->v = num;
    n->next = NULL;

    if (list->head == NULL)
    {
        list->head = n;
    }
    else
    {
        tracker->next = n;
    }
}
