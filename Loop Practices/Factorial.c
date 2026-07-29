#include<stdio.h>

int main(){
    long long int n,fact=1;
    printf("Enter the number whose factorial is to be calculated : ");
    scanf("%lld",&n);
    for (int i = n; i > 1; i--)
    {
        fact*=i;
    }
    printf("The factorial of %lld is %lld",n,fact);

    return 0;
}