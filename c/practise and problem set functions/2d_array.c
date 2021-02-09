#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;
    printf("Enter the dimensions of the array :\n");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    printf("Enter the %d elements of the array below: \n",a*b);
    for (int i = 0; i < a; i++) {
        for (int  j = 0; j < b; j++) {
            scanf("%d",&arr[i][j]);

        }
    }

    for (int g = 0; g < a; g++) {
        for (int  h = 0; h < b; h++) {
            printf("%d ",arr[g][h]);
        }
        printf("\n");
    }

    printf("hello World");
    return 0;
}