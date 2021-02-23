#include<stdio.h>
int main(){
    int a,b,c,d;
    // printf("enter the value of a \n",a);
    // scanf("%d",&a);
    // printf("enter the value of b \n",b);
    // scanf("%d",&b);
    // printf("enter the value of c \n",c);
    // scanf("%d",&c);
    // printf("enter the value of d \n",d);
    // scanf("%d",&d);
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a > b) && (a > c) && (a > d))
    {
        printf("the greatest value is a is %d\n",a);
    }
    else if(b > c && b > d)
    {
        printf("the grat is b is %d \n",b);
    }
    else if(c > d){

        printf("the grat is c is %d \n",c);
    }
    else
    {
        printf("the great is d is %d\n",d);
    }
    
return 0;
    
}