#include<stdio.h>
int main(){
    int age;
    printf("enter the age\n",age);
    scanf("%d",&age);
    if(age==10)
    {
        printf("the age is 10\n");
    }
    else if(age==12) 
    {
        printf("the age is 12\n");
    }
    else if(age==14) 
    {
        printf("the age is 14\n");
    }
    else if(age==16) 
    {
        printf("the age is 16\n");
    }
    else
    {
        printf("the age is not found");
    }
    
return 0;
}