//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>
#include <string.h>
int main() {
    char string[100];
    int i;
    printf("Enter a string\n");
    scanf("%[^\n]", string);
    for (i = 0; string[i] != '\0'; i++) {
        printf("%c\n", string[i]);
    }
    return 0;
}