#include<stdio.h>
int main(){
    int i=10;
    float g=2.3;
    char c='a';
    int *ptr;
    float *f;
    char *d;
    ptr =&i;
    f =&g;
    d = &c;
    printf("the value of ptr is : %u \n ",ptr);
    ptr++;
    printf("the value of ptr is : %u \n ",ptr);
    ptr--;
    printf("the value of ptr is : %u \n ",ptr);
    printf("the value of F is : %u \n ",f);
    f++;
    printf("the value of F is : %u \n ",f);
    f--;
    printf("the value of F is : %u \n ",f);
    printf("the value of C is : %u \n ",c);
    c++;
    printf("the value of C is : %u \n ",c);
    c--;
    printf("the value of C is : %u \n ",c);
    return 0;
}