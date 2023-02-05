/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char ch[5][50];

    for(int i=0; i<5; i++) {
        printf("Enter the string %d : ", i+1);
        gets(ch[i]);
    }

    


    for(int i=0; i<5; i++) {
        printf("\nString %d : %s", i+1, ch[i]);
    }

    return 0;
}