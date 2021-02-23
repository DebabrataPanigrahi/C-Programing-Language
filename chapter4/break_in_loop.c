#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(n;n<=10;n++)
    {
        if(n==5)
        {
            
            continue;
            //break;
        }
        printf("%d \n",n);
    }
    return 0;
}