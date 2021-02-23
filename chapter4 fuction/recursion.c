#include<stdio.h>
int fact(int x);
int main(){
    int a;
    scanf("%d",&a);
    fact(a);
    printf("the factorial of %d is %d\n",a,fact(a));
    return 0;
}
int fact(int a){
    if (a==1 || a==0)
    {
        return 1;
    }
    else
    {
        return a * fact(a-1);
    }
}