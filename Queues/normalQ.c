#include<stdio.h>
int enqueue(int arr[], int *rear, int n, int x) {
    if (*rear == n - 1) {
        printf("Queue is full. Cannot enqueue %d\n", x);
        return -1; // Queue is full
    }
    arr[++(*rear)] = x; // Increment rear and add the element
    return 0; // Enqueue successful
}
int dequeue(int arr[], int *front, int rear) {
    if (*front > rear) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1; // Queue is empty
    }
    return arr[(*front)++]; // Return the front element and increment front
}
void display(int arr[], int front, int rear) {
    if (front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter size of the queue: ");
    scanf("%d", &n);
    int arr[n];
    int front = 0, rear = -1;
    int choice, value;
    while (1) {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(arr, &rear, n, value);
                break;
            case 2:
                value = dequeue(arr, &front, rear);
                if (value != -1) {
                    printf("Dequeued: %d\n", value);
                }
                break;
            case 3:
                display(arr, front, rear);
                break;
            case 4:
                return 0; // Exit the program
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}