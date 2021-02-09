#include <stdio.h>
#include <stdlib.h>

struct emp{
    char name[30];
    int sal;
    char pos[10];
};

fun (int a){
    int b;
    b = a*a;
    printf("The square is : %d\n", b);
    return(b);
}

void main(){
    int a1;
    a1 = fun(20);
    printf("%d\n",a1);

    int i;
    for (i=0;i<10;i++){
        printf("%d\n",i);
    }

    static int k[50];
    int q = 2;
    k[q] = q++;
    printf("\n%d\n%d\n%d",k[0],k[20],q);

    int c = 3;
    switch (c)
    {
        default:
            printf("\n\tThis is a default statement. \n");
        case 1:
            printf("\n\tThis is the first case \n");
            break;
        case 2:
            printf("\n\tThis is the second case . \n");
            break;
        case 3:
            printf("\n\tThis is the third case . \n");
            break;

    }

}

