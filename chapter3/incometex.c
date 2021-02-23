#include<stdio.h>
int main()
{
    int income;
    float tax;
    printf("enter the income \n", income);
    scanf("%d",&income);
    if(income >= 250000 && income <500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if(income >= 500000 && income <1000000)
    {
        tax = tax + 0.10 * (income - 250000);
    }
    if(income >= 1000000)
    {
        tax = tax + 0.20 * (income - 250000);
    }
    printf("the tax is %f ",tax);
    return 0;
}