#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[0];
    printf("The value of pointer and the value in pointer is %u , %d \n",ptr,*ptr);
    ptr+=2; 
    printf("The value of pointer and the value in pointer after addition of 2 is is %u , %d \n",ptr,*ptr);
    printf("%d \n",*(arr+3));
    printf("%d is the value of arr and the address of 1st element is %u",arr,&arr[0]);
    return 0;
}