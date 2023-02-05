/*
    Program Written By : Akash Gautam [ LND College, BCA (2021-2024) ]
    Feel free to contact in case of any kind of issue you are facing with the code.
    Contact : @geekblower [ Instagram ]
*/

#include <stdio.h>
#include <string.h>

int main() {

    char ch[50];

    printf("Enter the string : ");
    // Avoid using scanf to take string input because it terminates just when it encouters a space 
    // scanf("%s", ch);
    gets(ch);

    // strrev(str) : Returns the character count of str
    int len = strlen(ch);
    printf("\nLength of the string : %d", len);

    // strcat(str1, str2) : Adds str2 in the last of str1
    strcat(ch, " abcd");
    printf("\nString after concatanation : %s", ch);

    // strcpy(str1, str2) : It copies the content of str2 into str1
    // strcmp(str1, str2) : Checks whether str1 & str2 are equal or not

    return 0;
}