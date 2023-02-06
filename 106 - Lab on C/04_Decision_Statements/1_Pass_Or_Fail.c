/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5, m6, tot;
    float avg;

    printf("Enter the marks in subject 1 : ");
    scanf("%d", &m1);
    printf("Enter the marks in subject 2 : ");
    scanf("%d", &m2);
    printf("Enter the marks in subject 3 : ");
    scanf("%d", &m3);
    printf("Enter the marks in subject 4 : ");
    scanf("%d", &m4);
    printf("Enter the marks in subject 5 : ");
    scanf("%d", &m5);
    printf("Enter the marks in subject 6 : ");
    scanf("%d", &m6);

    tot = m1 + m2 + m3 + m4 + m5 + m6;
    avg = tot / 6;

    if(avg >= 33.33) {
        printf("PASS");
    } else {
        printf("FAIL");
    }

    return 0;
}
