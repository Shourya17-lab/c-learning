#include<stdio.h>

int main(){
    int i=0,n;
    printf("Enter the number of natural numbers to print : ");
    scanf("%d",&n);
    printf("the natural numbers are :");
    do{
        printf("%d",i+1);
        if (i<n-1)
            printf(",");
        i++;
    }while(i<n);
    return 0;
}