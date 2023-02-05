/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>
#define MAX 100

int main() {
    int size;
    int arr[MAX];
    int sum = 0;
    
    AGAIN:
    printf("Enter the size of the array (under 100) : ");
    scanf("%d", &size);

    if(size<0 || size>100) {
        printf("\nEnter size in the range of 0-100 !\n");
        goto AGAIN;
    }

    printf("Enter the elements of the array : ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of all elements in the array = %d", sum);

    return 0;
}