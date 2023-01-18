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

doubly(head);

}
