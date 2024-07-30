/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char arr[100];
    scanf("%s", arr);  
    char *ptr1 = arr + strlen(arr) - 1;  
    int i = 0;
    int count = 0;

    while (i < strlen(arr) / 2) {
        if (arr[i] == *(ptr1 - i)) {  
            count++;
        }
        i++;
    }

    if (i == count) {
        printf("It is palindrome");
    }

    return 0;
}