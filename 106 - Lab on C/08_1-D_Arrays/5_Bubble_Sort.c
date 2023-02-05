/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>
#define MAX 100

/*
    COMPLEXITY ANALYSIS OF THE ALGORITHM (Bubble Sorting of Arrays)

    Time Complexity - O(n^2)
    Space Complexity - O(1)
    
    ---------------------------------
    
    VARIABLES USED IN THE FUNCTION : 

    arr - The given array
    size - Size of the array
    i, j - Loop counters
*/
void bubbleSort(int arr[], int size) {
    for(int i=0; i<size-1; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int size;
    int arr[MAX];
    
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
    }

    printf("\nArray before sorting : ");
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    
    bubbleSort(arr, size);
    
    printf("\nArray after sorting : ");
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;   
}