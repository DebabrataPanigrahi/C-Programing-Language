#include<stdio.h>
int sum(int a,int b);
int main(){
    int result=0,a,b;
    result = sum(a,b);
    printf("the result is %d\n",result);
    return 0;
}
int sum(int a,int b){
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    c= a+ b;
    return c;

}