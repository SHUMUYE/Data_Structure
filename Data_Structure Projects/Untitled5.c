#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

display(struct node *head)
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d\n", head -> data);
        display(head->next);
    }
}

struct node* front(struct node *head,int value)
{
    struct node* p;
    p=malloc(sizeof(struct node));
    p->data=value;
    p->next=head;
    return (p);
}

end(struct node *head,int value)
{
    struct node *p,*q;
    p=malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;
    q=head;
    while(q->next!=NULL)
    {
        q = q->next;
    }
    q->next = p;
}

after(struct node *a, int value)
{
    if (a->next != NULL)
    {
        struct node *p;
        p = malloc(sizeof(struct node));
        p->data = value;
        /*
        if initial linked list is
         _______        _______        _______ 
        |   1   |____\ |   3   |____\ |   5   |____\ NULL
        |_______|    / |_______|    / |_______|    / 
        and new node's value is 10
        then the next line will do something like
         _______        _______        _______ 
        |   1   |____\ |   3   |____\ |   5   |____\ NULL
        |_______|    / |_______|    / |_______|    / 
                        / \
                         |
                         |
                      ___|___
                     |   10  |
                     |_______|
        */
        p->next = a->next;
        a->next = p;
    }
    else
    {
        printf("Use end function to insert at the end\n");
    }
}

int main()
{
    struct node *prev,*head, *p;
    int n,i;
    printf ("number of elements:");
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            prev->next=p;
        prev=p;
    }
    head = front(head,10);
    end(head,20);
    after(head->next->next,30);
    display(head);
    return 0;
}
