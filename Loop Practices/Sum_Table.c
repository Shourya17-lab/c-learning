#include<stdio.h>

int main(){
    int sum=0;
    for (int i = 1; i <=10; i++)
    {
        sum+=(8*i);
        // printf("the sum in %d pass is %d\n",i,sum);
    }
    printf("The sum of table of 8 is : %d",sum);

    return 0;
}