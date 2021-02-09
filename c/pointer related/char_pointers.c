#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
    char arr[][10] = {"hola","amigo","chola","pamigo"};
    char *p  ;
    char *ptr = "joeyaj";
    char a[] = "poeypaj";
    int k =0;
    for (int j = 0 ; j < 4 ; j++ ) {    
        p = *(arr+j);          // or p = arr + j
        for (int i = 0 ;i < strlen(arr[j]) ; i++) {
        printf("%c",*(p+i));
        
    }
    printf("\n");

    }
    printf("%u\n",p);
    printf("%u\n",arr[3]);
    p = "AUR_BHAI";  //u can change the elements of the char arr with pointers but not with diretly assigning it to the array
    printf("\n");
    for (int i = 0 ;i <8 ; i++ ) {
        printf("%c",*(p+i));
    }
    printf("\n%u\n",&arr[0]);
    printf("%u\n",p);
    printf("%c\n",*(p));
    a[2] = "i"; //u can change the elements of the strinf/arr with this method but not with pointers
    puts(a);
    puts(ptr);
    return 0;
}