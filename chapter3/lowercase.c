#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a >=97 && a <=122)
    {
        printf("enter char is %c is lowercase \n",a);
    }
    else
    {
        printf("enter char %c is not a lowercase \n",a);
    }
    return 0;
}