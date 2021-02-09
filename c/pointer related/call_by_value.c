#include <stdio.h>
#include <stdlib.h>

int sum (int a ,int b) {
    int c = a + b;
    a +=122;
    b +=233;
    return c;
}

int main() {
    int a ,b;
    printf("The sum of a and b is %d:\n",sum(a = 12 , b = 23));
    printf("The new value  of a and b is %d , %d:\n",a,b);
    return 0;
}