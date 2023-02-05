/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>

int main() {
    int a=0, b=1, c;
    int limit;

    printf("Enter the limit of elements in the series : ");
    scanf("%d", &limit);

    printf("\nFibonacci series upto %d terms : ", limit);

    printf("%d %d ", a, b);

    for(int i =2; i<limit; i++) {
        c = a+b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}