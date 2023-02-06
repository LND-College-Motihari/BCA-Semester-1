/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>

int main() {
    int rad, hgt;
    printf("Enter the radius of the cylinder : ");
    scanf("%d", &rad);
    printf("Enter the height of the cylinder : ");
    scanf("%d", &hgt);

    float vol = 3.14 * rad * rad * hgt;

    printf("Volume of the cylinder : %.2f", vol);

    return 0;
}
