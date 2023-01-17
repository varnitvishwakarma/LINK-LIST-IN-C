#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void linklist(struct node*ptr){
    while (ptr!=NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
};


struct node * deletionatend(struct node * head){
    struct node * ptr = head;
    struct node * p = head->next;
    while(p->next!=NULL){
        p= p->next;
        ptr=ptr->next;
    }

    ptr->next = NULL;
    free(p);
    return head;

};

int main(){

struct node * head;
struct node * second;
struct node * third;
struct node * fourth;
struct node * fifth;

head = (struct node * )malloc(sizeof(struct node));
second = (struct node * )malloc(sizeof(struct node));
third =(struct node * )malloc(sizeof(struct node));
fourth = (struct node * )malloc(sizeof(struct node));
fifth = (struct node * )malloc(sizeof(struct node));

//link nodes to each other
head->data = 10;
head->next = second;

second->data = 20;
second->next = third;

third->data = 30;
third->next = fourth;

fourth->data = 40;
fourth->next = fifth;

fifth->data = 50;
fifth->next = NULL;


printf("link list before deletion\n");
linklist(head);
head = deletionatend(head);
printf("link list after deletion\n");
linklist(head);
}

