/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>
#define MAX 100

/*
    COMPLEXITY ANALYSIS OF THE ALGORITHM (Linear Searching of Arrays)

    Time Complexity - O(n)
    Space Complexity - O(1)
    
    ---------------------------------
    
    VARIABLES USED IN THE FUNCTION : 

    arr - The given array
    size - Size of the array
    val - Value to search for
    i - Loop counter
*/
void linearSearch(int arr[], int size, int val) {
    for(int i=0; i<size; i++) {
        if(arr[i] == val) {
            printf("%d found in the array at position %d\n", val, i+1);
            return;
        }
    }

    printf("%d is not present in the array\n", val);
}

int main() {
    int size, val;
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

    printf("Enter the element to search for : ");
    scanf("%d", &val);
    
    linearSearch(arr, size, val);

    return 0;   
}