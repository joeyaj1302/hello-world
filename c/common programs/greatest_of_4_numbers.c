#include <stdio.h>
#include <stdlib.h>

int compare(n) {
    int arr[n];
    int temp = 0;
    printf("Enter the %d numbers on separate lines below :\n", n);
    for (int i =0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int j =0; j<n; j++) {
        // printf("%d",arr[j]);
        if (arr[j]>temp) {
            temp = arr[j];
        }
    }
    printf("The largest number is %d\n",temp);
    return temp;
}

int main() {
    int n,a;
    printf("Enter the length of the array :\n");
    scanf("%d", &n);
    a = compare(n);
    printf("%d",a);
}