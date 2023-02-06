/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>

int main() {

    int start, end;
    printf("Enter the start limit : ");
    scanf("%d", &start);
    printf("Enter the end limitm : ");
    scanf("%d", &end);

    printf("All prime numbers between %d and %d : ", start, end);

    for(int i=start; i<=end; i++) {
        int temp = i;
        int flag = 1;

        for(int j=2; j<=temp/2; j++) {
            if(temp%j == 0) {
                flag = 0;
                break;
            }
        }

        if(flag) {
            printf("%d ", temp);
        }
    }

    return 0;
}
