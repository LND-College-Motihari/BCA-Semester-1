/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>

int main() {
    int principal;
    float rate, time;

    printf("Enter the principal amount : ");
    scanf("%d", &principal);

    printf("Enter the rate : ");
    scanf("%f", &rate);

    printf("Enter the time (in years) : ");
    scanf("%f", &time);

    float interest, amount;

    interest = (principal * rate * time) / 100;
    amount = principal + interest;

    printf("\nSimple Interest = %f", interest);
    printf("\nTotal Amount = %f", amount);

    return 0;
}