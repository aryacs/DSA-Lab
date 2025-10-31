#include<stdio.h>
#define size 5 
int stack[size];
int top = -1; 
void push(int item){
    if(top == size - 1){
        printf("Stack Overflow\n");
        return;
    }
    top = top + 1;
    stack[top] = item;
}
int pop(){
    if(top == -1){
        printf("Stack Underflow\n");
        //return;
    }
    else{
    int item = stack[top];
    top= top - 1;
    return item;
    }
}
void display(){
    if(top == -1){
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for(int i=top; i>=0; i--){
        printf("%d\n", stack[i]);
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    pop();  
    display(); 
    return 0;
}