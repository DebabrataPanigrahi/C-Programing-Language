#include<stdio.h>
void sumAndavg(int a,int b,int *sum,float *avg){
    *sum = a + b;
    *avg = (float)*sum/2;

}
int main(){
    int x,y,sum;
    float avg;
    scanf("%d %d",&x,&y);
    sumAndavg(x,y,&sum,&avg);
    printf("the sum is %d\n",sum);
    printf("the avg is %f\n",avg);
}