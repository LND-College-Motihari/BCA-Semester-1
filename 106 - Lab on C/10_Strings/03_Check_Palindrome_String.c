/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>
#include <string.h>

int main() {

    char ch[50];

    printf("Enter the string : ");
    gets(ch);

    int start = 0;
    int end = strlen(ch) - 1;
    int flag = 0;
    // printf("\nValues : %d & %d & %d\n", start, end, flag);
    while(start < end) {
        if(ch[start] != ch[end]) {
            flag = 1;
            break;
        }

        start++;
        end--;
    }

    if(flag) {
        printf("String is not palindrome!");
    } else {
        printf("String is palindrome!");
    }

    return 0;
}