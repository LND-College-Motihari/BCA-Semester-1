/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the starting meter reading : ");
    scanf("%d", &start);
    
    printf("Enter the ending meter reading : ");
    scanf("%d", &end);

    float amount = 0;
    int unit = end - start;

    if(unit < 1) {
        printf("Invalid input!");
    }

    if(unit > 500) {
        amount = (100*1.50) + (200*2.00) + (200*2.50);
        unit -= 500;

        amount += unit * 3.25;
        unit = 0;
    }

    
    if(unit > 300) {
        amount = (100*1.50) + (200*2.00);
        unit -= 300;

        amount += unit * 2.50;
        unit = 0;
    }

    
    if(unit > 100) {
        amount = (100*1.50);
        unit -= 100;

        amount += unit * 2.00;
        unit = 0;
    }

    if(unit > 0) {
        amount = unit * 1.50;
    }

    printf("\nBill Amount : %.2f", amount);

    return 0;
}
