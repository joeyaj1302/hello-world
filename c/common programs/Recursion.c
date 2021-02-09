#include <stdio.h>
#include <stdlib.h>

int fibo (int n) {
    if (n==0) {
        return 0;
    }
    else if (n == 1 || n==2) {
        return 1;
    }
    else {
        return fibo(n-2) + fibo(n-1);
    }    
}

int isum (int n) {
    if (n==1) {
        return 1;
    }
    else {
        return n + isum(n-1);
    }
    
}

int main() {
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    printf("The %d fibonacci number is : %d \n",n,fibo(n-1));
    printf("And the sum of %d natural numbers is : %d \n",n,isum(n));
    return 0;
}