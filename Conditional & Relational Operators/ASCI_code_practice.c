#include<stdio.h>

int main(){
    char c;
    printf("Enter a character :");
    scanf("%c",&c);
    if((int)c>=97 && (int)c<=122)
        printf("The character is in lower case");
    else if ((int)c>=65 && (int)c<=90)
        printf("The character is in upper case");
    else
        printf("The character is a special character");
    return 0;
}
