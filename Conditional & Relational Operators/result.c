#include<stdio.h>

int main(){
    int sub1,sub2,sub3;
    printf("enter subject one marks : ");
    scanf("%d",&sub1);
    printf("enter subject two marks : ");
    scanf("%d",&sub2);
    printf("enter subject three marks : ");
    scanf("%d",&sub3);
    if(sub1>33 && sub2>33 && sub3>33)
        if((sub1+sub2+sub3)/3>=40)
            printf("You have passed the exam with average marks : %d%%", (sub1+sub2+sub3)/3);
        else 
            printf("You have failed the exam because of low average marks : %d%%", (sub1+sub2+sub3)/3);
    else
        printf("You have failed the exam because of low marks in one or more subjects");
    return 0;
}
