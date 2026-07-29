#include<stdio.h>

int main(){
    int n;
    printf("enter the number of natural numbers to be printed : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d",i);
        if (i < n)
            printf(",");
    }
    return 0;
}