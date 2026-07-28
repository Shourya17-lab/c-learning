#include<stdio.h>

int main(){
    int age=10;
    
    if(age>10){
        printf("your age is greater than 10\n");
    }
    else if(age==10){
        printf("your age is equal to 10\n");
    }
    else {
        printf("your age is less than 10\n");
    }
    if(age%5==0){
        printf("your age is divisible by 5\n");
    }
    return 0;
}
