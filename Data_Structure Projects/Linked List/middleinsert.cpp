#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

display(struct node *head)
{
    if(head!=NULL){
        printf("%d\n", head -> data);
        display(head->next);
    }
}

after(struct node *a, int value)
{
    if (a->next != NULL)
    {
        struct node *p;
        p = malloc(sizeof(struct node));
        p->data = value;
    }
    else
    {
        printf("Use end function to insert at the end\n");
    }
}

int main()
{
    struct node *prev,*head,*p;
    int n,i;
    printf ("Enter Total number of elements:");
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        printf("Enter The data\n");
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            prev->next=p;
        prev=p;
    }
    printf("the lists are:\n");
    after(head->next->next,p->data);
    display(head);
    
    return 0;
}
