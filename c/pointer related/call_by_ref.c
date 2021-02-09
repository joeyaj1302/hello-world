#include <stdio.h>
#include <stdlib.h>

int swap (int *a , int *b) {
    int c;
    // printf("The value of *a is %d\n",*a);
    // printf("The value of *b is %d\n",*b);
    c = *b; //20
    // printf("The value of temp variable c is : %d\n",c);
    *b = *a; //10 
    *a = c; 
    // printf("The value of *a variable is : %d\n",*a);
    // printf("The value of *b variable is : %d\n",*b);
    return 0;

}
int main() {
    int a =10, b =20;
    int *v;
    v = &a;
    int *c = &b;
    printf("The value at pointer v(a) is %d\n",*v);
    printf("The value at pointer c(b) is %d\n",*c);
    printf("The swapped variables a and b are : \n", swap(v,c));
    printf("The value at pointer v(a) is %d\n",*v);
    printf("The value at pointer c(b) is %d\n",*c);
    return 0;
}