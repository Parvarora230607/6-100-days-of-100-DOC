//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/


#include <stdio.h>

int main() {
    int n, key, found = 0, position = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Array size must be positive.\n");
        return 1;
    }
    
    int arr[n];
 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
 
    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            position = i;
            break;  
        }
    }

    if (found) {
        printf("Element %d found at position %d (index %d).\n", key, position + 1, position);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    
    return 0;
}