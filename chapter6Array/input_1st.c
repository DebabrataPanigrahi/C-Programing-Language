#include<stdio.h>
int main(){
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter the value of marks %d : ",i+1);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
       printf("the value of marks for the first student is %d is %d: \n",i+1,marks[i]);
    }
    return 0;
}