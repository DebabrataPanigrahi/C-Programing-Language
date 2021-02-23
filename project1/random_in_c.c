#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
    int n,gusses,nguesses=1;
    srand(time(0));
    n = rand()%100 + 1;
    //printf("the number is %d\n",n);
        do
        {
            printf("gusses the no between 1 to 100 \n",gusses);
            scanf("%d",&gusses);
            if (gusses > n)
            { 
                printf("greater then number \n");
            }
            else if (gusses < n)
            {
                printf("smaller then number \n");
            }
            else
            {
                printf("you gussed it in %d attempt \n",nguesses);
            }
            nguesses++;
            
            
        } while (gusses  != n);
        

    return 0;
}