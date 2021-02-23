#include<stdio.h>
int main(){
    int age;
    printf("enter the age\n",age);
    scanf("%d",&age);
    if(age<=75 && age >=18)
    {
        printf("he or she can drive\n");
    }
    else
    {
        printf("he can't drive\n");
    }
    
return 0;
}