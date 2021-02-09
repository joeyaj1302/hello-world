#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[4][10];
    for (int i =0; i<4 ;i++) {
        for (int j = 1 ; j<=10 ; j++) {
            if (i == 0) {
            printf("%d ",14*j);
            }
            else if (i==1) {
                printf("%d ", 16*j);
            }
            else if (i==2) {
                 printf("%d ", 17*j);
            }
            else if (i==3) {
                printf("%d ",19*j);
            }
            
        } 
        printf("\n");

    }
    return 0;
}