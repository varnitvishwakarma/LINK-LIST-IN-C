#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
    };

void linklisttraversal(struct node*ptr)
{
    while (ptr != NULL){
        printf("Elements: %d\n", ptr->data);
        ptr= ptr->next;
    }
}
int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*forth;

    head=(struct node *) malloc(sizeof(struct node));
    second=(struct node *) malloc(sizeof(struct node));
    third=(struct node *) malloc(sizeof(struct node));
    forth=(struct node *) malloc(sizeof(struct node));

    //link first and second nodes
    head->data = 10;
    head-> next = second;

    //link second and third nodes
    second->data = 15;
    second-> next = third;

    //link third and forth nodes
    third->data = 20;
    third-> next = forth;

    // terminate link list at the forth node
    forth->data = 25;
    forth-> next = NULL ;


    linklisttraversal(head);

return 0;
}
