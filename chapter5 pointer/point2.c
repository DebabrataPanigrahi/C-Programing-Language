#include<stdio.h>
int address(int b){
       printf("the address of b is %u\n",&b);
       return 0;
}
int main(){
    int a=4;
    address(a);
    printf("the address of a is %u\n",&a);
    return 0;
}