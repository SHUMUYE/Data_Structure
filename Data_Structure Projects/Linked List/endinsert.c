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

void end(struct node *head,int value)
{
	
	struct node* p;
	struct node* q;
	p=malloc(sizeof(struct node));
//    struct node *p,*q;
//    p=malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;
    q->data=head;
    while(q->next!=NULL)
    {
        q = q->next;
    }
    q->next = p;
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
    end(head,p->data);
    display(head);
    
    return 0;
}
