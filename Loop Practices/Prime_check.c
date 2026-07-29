#include<stdio.h>

int main(){
    int n,count=0,x;
    printf("enter a number to check if it is prime or not :");
    scanf("%d",&n);
    x=n;
    for(int i=n;i>=1;i--){
        if(n%i==0)
            count++;
    }
    if(count==2 || count==1){
        printf("The number %d is a prime number ",x);
    }
    else 
        printf("The number %d is not a prime number it has %d factors ",x,count);
    return 0;
}