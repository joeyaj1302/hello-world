#include <stdio.h>
#include <stdlib.h>
void trial(int a , int *b) {
    int *i = &a;
    printf("The address of the variable in the fuction is : %d\n",i);
    printf("The value of the variable in the function is : %d\n", *i);
    int c = *b;
    c*=10;
    *b = c;
    printf("the value of varible is %d and its address in function is %u\n", *b,b); 
}

int main() {
    int b = 10;
    int *ptr = &b;
    printf("The value of the address of the variable in the main function is :%d\n",ptr);
    printf("The value of the variable in the main function is :%d\n",*ptr);
    printf("\n");
    trial(*ptr,ptr);       //or you can give b and &b as the inputs
    printf("\n");
    printf("The value of b and its address in main function is %d , %u \n",*ptr,ptr);
    return 0;
}