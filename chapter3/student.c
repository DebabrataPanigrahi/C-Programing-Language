#include<stdio.h>
int main(){
    int phy,chem,math;
    float total;
    printf("enter phys \n",phy);
    scanf("%d",&phy);
    printf("enter chem \n",chem);
    scanf("%d",&chem);
    printf("enter math \n",math);
    scanf("%d",&math);
    total =(phy + chem + math)/3;
        if(total < 40 || phy  < 33 || chem < 33 || math < 33)
        {
            printf("the percentage is %f so the student is fail \n",total);
        }
        else
        {
            printf("the percentage is %f so the student is passed \n",total);
        }
return 0;
}