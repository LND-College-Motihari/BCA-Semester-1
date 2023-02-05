/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>
#include <limits.h>
#define MAX 100

int main() {
    int size;
    int arr[MAX];
    int minElement = INT_MAX;
    int maxElement = INT_MIN;
    
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

        if(arr[i] < minElement) {
            minElement = arr[i];
        }
        
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    printf("\nMinimum element of the array = %d", minElement);
    printf("\nMaximum element of the array = %d", maxElement);

    return 0;
}