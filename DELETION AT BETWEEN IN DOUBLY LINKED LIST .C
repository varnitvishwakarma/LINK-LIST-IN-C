#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node *pre;
  struct node * next;

};


void doubly(struct node * head){
    struct node * ptr = head;
    do{
        printf("%d\n", ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=NULL);
}

// insertion function
struct node * deletionatbetween(struct node * head , int index){
  struct node * ptr;
  struct node * p = head;
  int i= 0;
  while (i!=index-1){
    p=p->next;
    ptr=p->next;
    i++;
  }
  p->next=ptr->next;
  ptr->next->pre=p;

  return head;
}


int main (){

struct node * head;
struct node * sec;
struct node * third;
struct node * fourth;
struct node * fifth;

head = (struct node *)malloc(sizeof(struct node ));
sec = (struct node *)malloc(sizeof(struct node ));
third = (struct node *)malloc(sizeof(struct node ));
fourth = (struct node *)malloc(sizeof(struct node ));
fifth = (struct node *)malloc(sizeof(struct node ));


// link nodes to each other
head->data=1;
head->pre=NULL;
head->next=sec;

sec->data=2;
sec->pre=head;
sec->next=third;

third->data=3;
third->pre=sec;
third->next=fourth;

fourth->data=4;
fourth->pre=third;
fourth->next=fifth;

fifth->data=5;
fifth->pre=fourth;
fifth->next=NULL;


// function call
printf("LINKED LIST BEFORE DELETION\n");
doubly(head);
head = deletionatbetween(head, 2);
printf("LINKED LIST AFTER DELETION\n");
doubly(head);

}
