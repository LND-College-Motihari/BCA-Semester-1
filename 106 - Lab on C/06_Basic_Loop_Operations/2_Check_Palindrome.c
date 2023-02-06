/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int rev = 0;
    int temp = num;

    while(temp != 0) {
        int rem = temp % 10;
        rev = rev*10 + rem;
        temp /= 10;
    }

    if(num == rev) {
        printf("Entered number is a palindrome number!");
    } else {
        printf("Entered number is not a palindrome number!");
    }
    
    return 0;
}
