#include<stdio.h>
int main(){
    int year;
    printf("enter year \n",year);
    scanf("%d",&year);
    if(year % 400 == 0){
        printf("year %d is leap year",year);
    }
    else if(year % 100 == 0){
        printf("year %d is not a leap year",year);
    }
    else if(year % 4 == 0){
        printf("year %d is leap year",year);
    }
    else{
        printf("year %d is not a leap year",year);
    }
    return 0;
}