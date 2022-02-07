#include<stdio.h>
int main()
{
    char firstname[20];
        int age;

    printf("what is my name?\n ");
    scanf("%s", firstname);

    printf("what is my age?\n ");
    scanf("%d", age);

    printf("%s is %d years old\n");

    return(0);

}