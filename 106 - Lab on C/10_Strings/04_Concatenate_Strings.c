/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>
#include <string.h>

int main() {

    char ch1[50], ch2[50];

    printf("Enter the first string : ");
    gets(ch1);
    
    printf("Enter the second string : ");
    gets(ch2);

    // Using in-built function
    // strcat(ch1, ch2);
    
    int len1 = strlen(ch1);
    int len2 = strlen(ch2);

    for(int i=0; i<len2; i++) {
        ch1[len1+i] = ch2[i];       // Adding characters from second string to the first string one by one 

        ch1[len1+i+1] = '\0';       // Adding NULL character to the end of first string to determine its ending
    }

    printf("Concatanted string : %s", ch1);

    return 0;
}