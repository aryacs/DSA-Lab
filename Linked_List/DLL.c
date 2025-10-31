#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* prev;
    int data;
    struct node* next;
}
int main(){
    struct node *head,*new;
    head=NULL;
    int choice;
    do{
        new = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&new->data);
        new->prev=NULL;
        new->next=NULL;
        if(head==NULL){
            head=new;
        }
        else{
            struct node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new;
            new->prev=temp;
        }
        printf("Do you want to continue(0,1):");
        scanf("%d",&choice);
    }while(choice==1);
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;    

    }
    return 0;
}