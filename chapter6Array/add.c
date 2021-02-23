#include<stdio.h>
int main(){
    int i=20;
    int j=30;
    int sum=0;
    int div=0;
    int sub=0;
    int *k;
    int *h;
    k=&i;
    h=&j;
    sum = *k + *h;
    div = *k/ *h;
    sub = *h - *k;
    printf("%d\t %d\t %d\t",sum,div,sub);
    if (*k > *h)
    {
        /* code */
        printf(" * k");
    }
    else
    {
        printf("* h");
    }
    
    
    return 0;
}