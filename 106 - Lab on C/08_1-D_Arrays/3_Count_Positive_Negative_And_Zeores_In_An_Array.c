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
    int pos=0, neg=0, zero=0;
    
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

        if(arr[i] < 0) {
            neg++;
        } else if(arr[i] > 0) {
            pos++;
        } else {
            zero++;
        }
    }

    printf("\nTotal number of positive element in the array = %d", pos);
    printf("\nTotal number of negative element in the array = %d", neg);
    printf("\nTotal number of zeroes in the array = %d", zero);
    
    return 0;
}