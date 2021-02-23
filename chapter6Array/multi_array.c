#include<stdio.h>
int main(){
    int m=2,n=2;
    int mark[m][n];
    //scanf("%d %d",&m,&n);
    printf("Enter the marks in subject wise\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mark[m][n]);
        }
    }
    printf("The marks in subject wise\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("%d %d %d\n",m+1,n+1,mark[m][n]);
        }
    }
    return 0;
}