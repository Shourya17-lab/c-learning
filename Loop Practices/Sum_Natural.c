#include<stdio.h>

int main(){
    int sum=0;
    int i = 1;
    while (i <=10)
    {
        sum+=i;
        printf("The sum in %d pass is %d\n",i,sum);
        i++;
    }
    printf("The sum of first 10 natural numbers is : %d",sum);
    return 0;
}