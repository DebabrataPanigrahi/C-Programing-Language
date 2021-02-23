#include<stdio.h>
int main(){
    int n;
    int mark[n];
    int *ptr;
    ptr = &mark[n];
    scanf("%d",&n);
printf("enter the value of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
printf("the enter value of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",mark[i]);
    }
    return 0;
}