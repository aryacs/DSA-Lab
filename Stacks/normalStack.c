#include<stdio.h>
int push(int arr[], int *top, int n, int x) {
    if (*top == n - 1) {
        printf("Stack is full. Cannot push %d\n", x);
        return -1; // Stack is full4
    }
    arr[++(*top)] = x; // Increment top and add the element
    return 0; // Push successful
}
int pop(int arr[], int *top) {
    if (*top == -1) {
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Stack is empty
    }
    return arr[(*top)--]; // Return the top element and decrement top
}
void display(int arr[], int top) {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter size of the stack: ");
    scanf("%d", &n);
    int arr[n];
    int top = -1;
    int choice, value;
    while (1) {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(arr, &top, n, value);
                break;
            case 2:
                value = pop(arr, &top);
                if (value != -1) {
                    printf("Popped: %d\n", value);
                }
                break;
            case 3:
                display(arr, top);
                break;
            case 4:
                return 0; // Exit the program
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}