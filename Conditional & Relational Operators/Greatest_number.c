#include<stdio.h>

int main(){
    int n1,n2,n3,n4;
    printf("enter first number :");
    scanf("%d",&n1);
    printf("enter second number :");
    scanf("%d",&n2);
    printf("enter third number :");
    scanf("%d",&n3);
    printf("enter fourth number :");
    scanf("%d",&n4);
    if(n1>n2 && n1>n3 && n1>n4)
        printf("The greatest number is %d",n1);
    else if(n2>n1 && n2>n3 && n2>n4)
        printf("The greatest number is %d",n2);
    else if(n3>n1 && n3>n2 && n3>n4)
        printf("The greatest number is %d",n3);
    else
        printf("The greatest number is %d",n4);
    return 0;
}
