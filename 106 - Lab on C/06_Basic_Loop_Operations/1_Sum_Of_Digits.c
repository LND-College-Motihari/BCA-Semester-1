/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>

int main() {
    int number;
    int digitSum = 0;

    printf("Enter the number : ");
    scanf("%d", &number);

    int temp = number;

    while(temp != 0) {
        digitSum = digitSum + (temp % 10);
        temp = temp / 10;
    }

    printf("Sum of the digits of %d = %d", number, digitSum);

    return 0;
}