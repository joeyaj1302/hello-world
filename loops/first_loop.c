#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    printf("Enter the number of lines :\n");
    scanf("%d",&a);
    for (int i = 0 ; i<=a ; i++) {
        printf(" ");
        for ( int k = a - i ; k>=0 ; k--) {
            printf(" ");
        }
        for (int j = 0; j<=i ; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}