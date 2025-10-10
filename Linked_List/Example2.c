#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node *head,*temp,*newnode;
int main(){
    int choice;
    do{
    printf("Enter the choice:");
    scanf("%d",&choice);
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    temp->next=head; // Making the linked list circular
    printf("Do you want to continue(0,1):");
    scanf("%d",&choice);
    }while(choice == 1);
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }   
    while(temp->next!=head){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}