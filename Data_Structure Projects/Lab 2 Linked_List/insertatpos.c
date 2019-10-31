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
void insertAtPos(int pos,int n){
    int i=1;
    struct node* temp,*p;
     p=root;
 while(i<n){
         p=p->next;
         i++;
     }
temp=(struct node*)malloc(sizeof(struct node));
     temp->data=n;
     temp->next= p->next;
     p->next=temp;

     printf("\n");
     while(root!=NULL){
          printf("%d->",root->data);
          root=root->next;
         }
}


int main(){
   int n;
	printf("Enter Size Of Data:\n");
	scanf("%d",&n);
	printf("\n");
	
	createList(n);
	insertAtPos(2,3);

}
