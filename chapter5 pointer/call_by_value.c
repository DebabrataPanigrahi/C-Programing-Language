#include<stdio.h>
int sum(int a,int b);
int main(){
    int x=9,y=4;
    printf("the value of x and y before run is %d and %d\n",x,y);
    printf("the sum is %d\n",sum(x,y));
    printf("the value of x and y after run is %d and %d\n",x,y);
    return 0;
}
int sum(int a,int b){
    int c;
    a=567;
    b=987466;
    c=a+b;
    return c;
}