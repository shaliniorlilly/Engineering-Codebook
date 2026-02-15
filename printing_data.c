// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void print_data(struct node *head){
    if(head==NULL){
        printf("List is empty");
    }
    else{
        struct node *ptr= head;
        while(ptr!=NULL){
            printf("the data is:%d  \n", ptr->data);
            ptr= ptr->next;
        }
    }
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

    print_data(head);
    
    return 0;
}
