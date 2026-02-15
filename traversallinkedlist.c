// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void count_of_nodes(struct node *head){
    int count=0;
    if(head==NULL){
        printf("TRAVERSAL NO POSSIBLE!");
        return;
    }
    struct node *ptr= NULL;
    ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
    }
    printf("THE NUMBER OF NODES ARE: %d", count);
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

    count_of_nodes(head);
    
    return 0;
}
