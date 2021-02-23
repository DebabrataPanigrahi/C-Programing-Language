#include<stdio.h>
int main(){
    int i,n,prime =0;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            prime=1;
            break;
        }
    }
    if(prime == 0){
        printf("this %d is a prime no\n",n);
        }
        else
        {
            printf("this is not a %d is prime \n",n);
        }
    return 0;
}