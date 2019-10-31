#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
  struct node* head;

void insert(int x){
	struct node* temp;
	temp=malloc(sizeof(struct node));
//	node* temp=(node)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	head=temp;
	if(temp!=NULL)
		temp->next=head;
		head=temp;	
}

void print(){
	struct node* temp=head;
	printf("the lists are:-\n");
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

	int main()
{
    int n,i,x;
    printf ("Enter total number of elements:");
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++){
    	printf("Enter the number\n");
    	scanf("%d",&x);
    	insert(x);
    	print();
	}
    
    return 0;
}
	

