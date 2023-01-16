#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node*next;
   };
void linklist(struct node*ptr){
     while (ptr != NULL){
     printf("element: %d\n", ptr->data);
     ptr=ptr->next;
}
}
struct node * insertionatfirst(struct node * head, int data){
    struct node * ptr = (struct newnode*)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;


};

int main(){

   struct node*head;
   struct node*second;
   struct node*third;
   struct node*forth;
   struct node*five;

   head=(struct node*)malloc(sizeof(struct node));
   second=(struct node*)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));
   forth=(struct node*)malloc(sizeof(struct node));
   five=(struct node*)malloc(sizeof(struct node));

//link first node to second

   head->data = 10;
   head->next = second;

//link second to third

   second->data = 20;
   second->next = third;

//link third to forth

   third->data = 30;
   third->next = forth;

//link fourth to five

   forth->data = 40;
   forth->next = five;

//link five

   five->data = 50;
   five->next = NULL;


   printf("link list before insertion\n");
   linklist(head);
   head=insertionatfirst(head,67);
   printf("link list after insertion\n");
   linklist(head);


return 0;
}
