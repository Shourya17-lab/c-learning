#include<stdio.h>

int main(){
    int i=0;
    printf("the natural numbers are :");
    while(i<=10){
        printf("%d ",i+10);
        if (i<10)
            printf(",");
        i++;
    }
    return 0;
}