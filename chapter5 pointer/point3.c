#include<stdio.h>
int mult(int *b){
        *b *=10;
        return 0;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("the value of a befor programe is %d\n",a);
    mult(&a);
    printf("the  of a after programe is %d\n",a);
    return 0;
}