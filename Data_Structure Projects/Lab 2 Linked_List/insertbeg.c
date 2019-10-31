#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node* next;
};
struct node* head=NULL;
void createList(int n){
    struct node* temp;
     int i;
    for(i=0;i<n;i++){
	
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&(temp->data));
    temp->next=NULL;

    if(head==NULL){
      head=temp;

    }else{
      struct node* p;
      p=head;
      while(p->next!=NULL){
        p=p->next;
      }
      p->next=temp;

//     while(p!=NULL){
//	    int j;
//	    for(j=0;j<i;j++){
         printf("%d->",p->data);
        p=p->next;
//     }
     printf("\n");
  }
}
}
void insertBeg(int x){
  struct node* temp;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=x;
  temp->next=head;
  while(temp!=NULL){

      printf("%d->",temp->data);
      temp=temp->next;
      }

}


int main(){
	int n;
	printf("Enter Amount\n");
	scanf("%d",&n);
	
createList(n);
insertBeg(7);

}
