#include<stdio.h>
void patt(int n);
int main(){
    int n;
    scanf("%d",&n);
    patt(n);
    return 0;
}
void patt(int n){
    if (n==1)
    {
        printf("*\n");
        return;
    }
    patt(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");   
}