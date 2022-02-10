#include<stdio.h>
int main()
{
    int age;
    printf("what is your age?");
    scanf("%d",&age);
    
    if(age >= 18){
        printf("you can  access your account");
    }

    if(age < 18){
        printf("you may not allowed to access your account");
    }
}