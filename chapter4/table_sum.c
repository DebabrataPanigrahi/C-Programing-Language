#include<stdio.h>
int main(){
    int n,sum=0,i,j,b;
    scanf("%d",&n);
    for(i = 1;i<=10;i++){
        b= n * i;
        printf("%d * %d = %d\n",i,n,b);
        sum =sum+b;
    }
    printf("the sum is %d\n",sum);
    return 0;
}