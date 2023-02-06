/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>

int main() {

    for(int i=1; i<=10; i++) {
        if(i==3 || i==5) {
            continue;
        }

        printf("\nTable of %d : ", i);

        for(int j=1; j<=10; j++) {
            printf("%d ", i*j);
        }
    }
    
    return 0;
}
