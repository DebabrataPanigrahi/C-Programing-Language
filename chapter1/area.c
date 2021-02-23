#include<stdio.h>
int main(){
    int length, breadth;
    int r;
    int height;
    float pi=3.14;
    printf("The value of length is\n ");
    scanf("%d",&length);
    printf("The value of breath is \n");
    scanf("%d",&breadth);
    float area=length*breadth;
    printf("The are of the rectangle is %f\n",area);

    printf("The vale of radious is\n");
    scanf("%d",&r);
    printf("The value of height is \n");
    scanf("%d",&height);

    printf("The area of circle is %d\n",pi*r*r);
    printf("the area of cylindeer is %d\n",pi*r*r*height);
return 0;
}