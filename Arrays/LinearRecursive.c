#include<stdio.h>
int recursiveSearch(int arr[], int n, int x) {
    if (n <= 0) {
        return -1; // Base case: Element not found
    }
    if (arr[n - 1] == x) {
        return n - 1; // Element found at index n-1
    }
    return recursiveSearch(arr, n - 1, x); // Recur for the rest of the array
}
int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements in the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter element to search: ");
    scanf("%d", &x);
    int result = recursiveSearch(arr, size, x);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}
