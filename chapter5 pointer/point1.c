#include<stdio.h>
int main(){
    int a;
    int *b;
    b=&a;
    scanf("%d",&a);
    printf("the address of a is %d\n",b);
    printf("the value of a is %d\n",*b);
}