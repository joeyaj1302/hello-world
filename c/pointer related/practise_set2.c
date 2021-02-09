#include <stdio.h>
#include <stdlib.h>

void sum_and_avg(int *a , int *b , int *sum2 , float *avg1) {
    int sum1;
    float avg;
    *sum2 = *a + *b;
    *avg1 = (float)(*a+*b)/2; 
}

int main() {
    int a = 10, b = 20;
    int *pa = &a;
    int *pb = &b;
    int suma = 0 ;
    float avg1 = 0.0;
    int *s = &suma;
    float *av = &avg1;
    sum_and_avg(pa,pb,s,av);  //or can directly pass the values of a and b if u dont want to use pointers for all variables in void.
    printf("The values of sum and average is %d , %.2f \n", *s,*av);
    return 0;
}