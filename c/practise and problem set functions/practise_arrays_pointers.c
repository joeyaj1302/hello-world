#include <stdio.h>
#include <stdlib.h>

int count_p (int *p , int a) {
    int count = 0;
    // printf("The value at first element of array is %d \n",arr[0]);  //without pointers
    // printf("The address at first element of array is %u \n",&arr[0]);
    for (int j =0 ; j<=a ; j++) {
        if (*(p+j) > 0) {         //with pointers
            count += 1;
        }
    }
    return count;
}

int main() {
    int a;
    printf("Enter the length of the aray :\n");
    scanf("%d",&a);
    a-=1;
    int arr[a];
    printf("Enter the values of the array :\n");
    for (int i=0 ; i<=a ; i++) {
        scanf("%d",&arr[i]);
    }
    int *ptr ;
    ptr = arr;
    printf("The value of pointer is %u \n",ptr);
    int c = count_p(ptr,a);
    printf("the number of positive integers is %d \n",c);
    return 0;
}