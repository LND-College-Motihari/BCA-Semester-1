/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>

int main() {
    int C, F;

    // Converting CELSIUS to FAHRENHEIT
    printf("Enter the temperature in celsius : ");
    scanf("%d", &C);

    F = (C*9)/5 + 32;

    printf("\n%d degree celsius = %d degree fahrenheit", C, F);


    // Converting FAHRENHEIT into CELSIUS
    printf("\nEnter the temperature in fahrenheit : ");
    scanf("%d", &F);

    C = (F-32)*5/9;

    printf("\n%d degree fahrenheit = %d degree celsius", F, C);

    return 0;
}
