/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Enter the co-efficient of x^2 : ");
    scanf("%f", &a);

    printf("Enter the co-efficient of x : ");
    scanf("%f", &b);

    printf("Enter the constant term : ");
    scanf("%f", &c);

    float det = (b*b) - (4*a*c);

    if(det < 0) {
        printf("Roots doesn't exist!");
    } else if(det == 0) {
        float root = b / (2*a);
        printf("Roots : %.2f & %.2f", root, root);
    } else {
        det = sqrt(det);
        float root1 = (-b+det) / (2*a);
        float root2 = (-b-det) / (2*a);

        printf("Roots : %.2f & %.2f", root1, root2);
    }

    return 0;
}
