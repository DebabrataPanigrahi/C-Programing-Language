#include<stdio.h>
int main(){
    int a;
    printf("The value of a is",a);
    scanf("%d",&a);

    switch(a)
    {
        case 1:
            printf("rating is 1\n");
            break;
        case 2:
            printf("rating is 2\n");
            break;
        case 3:
            printf("rating is 3\n");
            break;
        case 4:
            printf("rating is 4\n");
            break;
        case 5:
            printf("rating is 5\n");
            break;
        //continue
        default:
            printf("not here find some where");
    }
    return 0;
    }