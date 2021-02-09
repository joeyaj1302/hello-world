#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10 , b = 20;
    int *p ;
    p = &a;
    int *c;
    c = &b;
    int *f ;
    f = p;
    if (p>f) {
        printf("Yollooo \n");
        printf("The value of p,c and f are %d , %d , %d \n",p,c,f);
    }
    else {
    printf("Pollooo \n");
    printf("The value of pointers p,c and f are %d , %d ,%d \n",p,c,f);
    printf("The value in pointers p,c and f are %d , %d ,%d \n",*p,*c,*f);
    }
    return 0;
}