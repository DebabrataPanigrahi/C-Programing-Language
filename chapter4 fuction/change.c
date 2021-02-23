#include<stdio.h>
void change(int a);
int main(){
    int a;
   scanf("%d",&a);
    printf("the value of a is before change is %d\n",a);
    change(a);
    printf("the value of a is after change is %d\n",a);
}
void change(int a){
    scanf("%d",&a);
    printf("the value is here which you are lokking for %d\n",a);
}