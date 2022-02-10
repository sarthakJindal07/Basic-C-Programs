#include<stdio.h>
int main()
{
    float avgprofit;
    int profit = 67;
    int sales = 99;
    int numberofdays = 20;

    avgprofit = ((float)profit*(float)sales)/ (float)numberofdays;
    printf("average daily profit: %.4f",avgprofit);
}
