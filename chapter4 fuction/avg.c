#include<stdio.h>
float avg(int a,int b,int c);
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("the avvg of a, b, c is %f",avg(a,b,c));
    return 0;
}
float avg(int a,int b,int c){
    float d;
    d=(float)(a+b+c)/3;
    return d;
}