#include<stdio.h>
int sum(int a);
int main(){
    int a;
    scanf("%d",&a);
    printf("the sum of 1st %d is %d\n",a,sum(a));
    return 0;
}
int sum(int a){
    int s=0;
    if(a > 0){
    for(int i=0;i<=a;i++){
    s =s + i;
}
}
else
{
    return a;
}
   return s;
}