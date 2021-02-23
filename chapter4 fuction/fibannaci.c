#include<stdio.h>
int fib(int num){
    int x=0, y=1, a;
    if(num== 0){
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            a = x + y;
            x=y;
            y=a;
        }
        return y;   
    } 
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d \n",fib(num));
    return 0;
}