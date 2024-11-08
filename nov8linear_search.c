#include <stdio.h>
int main() {
    int arr[100];
    int size, target, foundIndex = -1;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &target);
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break; 
        }
    }
    if (foundIndex != -1) {
        printf("Element found at index: %d\n", foundIndex);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}