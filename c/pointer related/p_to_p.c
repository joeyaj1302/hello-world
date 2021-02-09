#include <stdio.h>
#include <stdlib.h>

int main() {
    int i =10;
    int *ptr_i = &i;
    int **ptr_pi = &ptr_i;
    printf("The value at pointer of i is : %d\n",*ptr_i);
    printf("The address at pointer of i is %u \n", ptr_i);
    printf("The value of pointer of pointer of i at 2* is : %d\n",**ptr_pi);
    printf("The value of pointer of pointer of i at 1* is : %d\n",*ptr_pi);
    printf("The address at pointer to pointer of i is : %u\n",ptr_pi);
    return 0;
}