#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* next;
};
struct node * root=NULL;
void createList(int n){
    struct node * temp;
     int i;
    for(i=0;i<n;i++){
    	
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d",&(temp->data));
    temp->next=NULL;
    if(root==NULL){
      root=temp;

    }else{
      struct node* p;
      p=root;
      while(p->next!=NULL){
        p=p->next;
      }
      p->next=temp;

     while(p!=NULL){
         printf("%d->",p->data);
        p=p->next;
     }
     printf("\n");
  }
}
}

void insertEnd(int n){
  struct node* temp;
  temp=(struct node*)malloc(sizeof(struct node));
  while(root!=NULL){
    root=root->next;
  }
  temp->data=n;
  temp->next=NULL;
  root->next=temp;

}

int main(){
  int n;
	printf("Enter size Of Data:\n");
	scanf("%d",&n);
	printf("\n");
createList(n);
insertEnd(5);

}
