#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num;
    srand(time(0));
    num = rand()%100 +1 ;
    int guess;
    int counter = 0;
    printf("Guess a number between 1 and 100 :\n");
    while (guess!=num){
        scanf("%d",&guess);
        if (guess > num + 25) {
            printf("The guess is way higher than the number\n");
        }
        else if (guess < num - 25 ) {
            printf("The guess is way lower than the number \n");

        }
        else if (guess > num ) {
            printf("The guess is higher than the number \n");
        }
        else if (guess < num) {
            printf("The guess is lower than the number\n");
        }
        counter++;

    };   
    printf("Hooray u have chosen the right number %d in %d tries !! \n",num,counter);
    return 0;
}