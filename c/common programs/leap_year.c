#include <stdio.h>
#include <stdlib.h>

int main() {
    int year;
    printf("Enter the year :\n");
    scanf("%d", &year);
    if ((year%4==0 && year%100!=0) || (year%100==0 && year%400==0)) {
        printf("Yes %d is a leap year :)",year);
    }
    else {
        printf("No You doofus %d is not a leap year, what were you thinking :(", year);
    }
    return 0;
}