#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    printf("enter your choice :\n");
    scanf("%d",&choice);
    if (1<=choice && choice<=10) {
        printf("Yayy");

    }
    else {
        printf("OH no ! anyways ");
    }
    return 0;
}