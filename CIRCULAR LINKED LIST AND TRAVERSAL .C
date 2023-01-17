#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node * next;

};

// traversal 
void circular_linked_list(struct node * head){
   struct node * ptr = head;
   do{printf("%d\n", ptr->data);
    ptr=ptr->next;
   }
    while(ptr!=head);

}

int main(){
 struct node * head;
 struct node * second;
 struct node * third;
 struct node * fourth;
 struct node * fifth;


 head=(struct node*)malloc(sizeof(struct node));
 second=(struct node*)malloc(sizeof(struct node));
 third=(struct node*)malloc(sizeof(struct node));
 fourth=(struct node*)malloc(sizeof(struct node));
 fifth=(struct node*)malloc(sizeof(struct node));

 
 // link nodes to each other 
 head->data= 11;
 head->next= second;

 second->data =8;
 second->next =third;

 third->data=52;
 third->next=fourth;

 fourth->data=69;
 fourth->next=fifth;

 fifth->data=55;
 fifth->next=head;


 circular_linked_list(head);
 }

