//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    char ch;
    int count=0;
    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find its frequency\n");
    scanf("%c", &ch);
    for (int i=0; str[i] != '\0'; ++i) {
        if (ch==str[i]) {
            ++count;
        }
    }
    printf("Frequency of '%c'=%d\n", ch, count );
    return 0;
}