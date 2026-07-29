#include<stdio.h>

int main(){
    for (int i = 1; i <= 12; i++)
    {
        if (i==7)
        {
            continue; //this will skip the value of i when it is 7 and continue the loop
        }
        printf("the value of i is : %d\n",i);
        if (i == 10)
        {
            break;//this will print the value of i till 10 and then break the loop
        }
    }
    return 0;
}