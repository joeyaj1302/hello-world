#include <stdio.h>
#include <stdlib.h>

int reverse(int *p/* int arr[]*/, int a) {
    //int arr2[a];    
    //printf("The elements before reversing are :\n");
    int temp;
    for (int i = a ; i>= a/2 ; i--) {
        //arr2[a-i] = arr[i];   //reversing with arrays
        //printf("%d ",arr[i]);
        temp = *(p+i);  //reversing with pointers
        *(p+i) = *(p+a-i);
        *(p+a-i) = temp;
    }
    // printf("\nThe elements after reversing are : \n");
    // for (int j = 0 ; j<=a ; j++) {
    // printf("%d ",arr2[j]);
    // }
    return 0;
}

int main() {
    int a;
    printf("Enter the length of the array :\n");
    scanf("%d",&a);
    a-=1;
    int arr[a];
    printf("Enter the elements of the array :\n");
    for (int k = 0; k<=a ; k++) {
        scanf("%d",&arr[k]);
    }
    int *ptr = arr;

    reverse(ptr,a);
    printf("\nThe elements after reversing are : \n");
    for (int j = 0 ; j<=a ; j++) {
    printf("%d ",arr[j]);
    }
    return 0;
}