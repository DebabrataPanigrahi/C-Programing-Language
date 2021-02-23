#include<stdio.h>
int main(){
    int i=10;
    int *ptr;
    int **ptr_ptr;

    ptr=&i;
    //Pointer to Pointer
    ptr_ptr=&ptr;
    //FOR I
    printf("the value of I is %d\n",**ptr_ptr);
    printf("the address of I is %d\n",*ptr_ptr);
    printf("the address of I is %u\n",&i);
    printf("the addres of I is %d\n",ptr);
    printf("the value of I is %d\n",*ptr);

    //FOR PTR
    printf("the address of PTR is %d\n",ptr_ptr);
    printf("the address of PTR is %u\n",&ptr); 
    printf("the value of PTR is %d\n",*(&ptr));
    printf("the value of PTR is %d\n",*ptr_ptr);

    //FOR PTR_PTR
    printf("the value of PTR_PTR is %d\n",*(&ptr_ptr));
    printf("the value of PTR_PTR is %d\n",ptr_ptr);
    printf("the address of PTR_PTR is %u\n",&ptr_ptr);

    return 0;
}