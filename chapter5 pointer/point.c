#include<stdio.h>
int main(){
    int i=32;
    int *j=&i;
    //printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*j);
    printf("the addres of i is %d\n",j);
   // printf("the addres of i is %u\n",&i);
    printf("the addres of j is %u\n",&j);
    printf("the value of j is %d\n",*(&j));
    return 0;
}