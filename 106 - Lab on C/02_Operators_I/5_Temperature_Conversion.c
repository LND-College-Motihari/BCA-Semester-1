/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>

int main() {
    int C, F;

    printf("\n-------C = %d---------F = %d---------\n", C, F);

    // Converting CELSIUS to FAHRENHEIT

    printf("Enter the temperature in celsius : ");
    scanf("%d", &C);

    // printf("\n-------C = %d---------F = %d---------\n", C, F);

    F = (C*9);
    // printf("\n-------C = %d---------F = %d---------\n", C, F);

    F /= 5;
    // printf("\n-------C = %d---------F = %d---------\n", C, F);
    F += 32;

    printf("\n%d degree celsius = %d degree fahrenheit");


    // Converting FAHRENHEIT into CELSIUS
    printf("\nEnter the temperature in fahrenheit : ");
    scanf("%d", &F);

    C = (F-32)*5/9;

    printf("\n%d degree fahrenheit = %d degree celsius");

    return 0;
}
