#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void insert_beginning(struct node *head, int data){
    struct node *ptr= head;
    struct node *temp =malloc(sizeof(struct node));
    temp->data= data;
    temp->next= NULL;
   
        while(ptr->next=NULL){
            ptr=ptr->next;
        }
     ptr->next= temp;   
    
}
void print_lastnode(struct node *head){
    struct node *ptr= head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    printf("The new node's data is: %d \n", ptr->data);
    printf("The new node's link is: %d", ptr->next);
}
    
int main() {
    int n=20;
    struct node *head= NULL;
    struct node *new_node= NULL;
    
    for(int i=1; i<=20;i++){
        new_node= malloc(sizeof(struct node));
        new_node->data= i;
        new_node->next= NULL;
        if(head==NULL){
            head= new_node;
        }
        else{
            struct node *ptr= head;
            while(ptr->next!=NULL){
                ptr= ptr->next;
            }
            ptr->next= new_node;
        }
    }
    

    insert_beginning(head, 67);
    print_lastnode(head);
    
    return 0;
}
