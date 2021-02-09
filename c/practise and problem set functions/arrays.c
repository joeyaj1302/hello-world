#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[10];
    for (int i = 0; i<10;i++) {
        printf("Enter the %d number :",i);
        scanf("%d",&arr[i]);
    }
    for(int j = 0 ; j<10; j++) {
        printf("%d, ", arr[j]);
    }
    //printf();
    return 0;
}