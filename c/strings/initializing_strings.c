#include <stdio.h>
#include <stdlib.h>

int st_len(char * st ) {
    //char *ptr = st;
    int count = 0;
    int i = 0;
    while (*(st+i) != '\0') {
        count++;
        i++;
    }
    return count;
}


int main() {
    char *str = "Hello World ";
    char *st[] = {"helllllllllo","misteeeeeeeeer","AhoYYYYYY","dsojdoaodsjdojao"};
    char str1[100] = "hola";
    // printf("%s",*str);
    int l = st_len(str);
    // for (int i = 0 ; i <l ; i++) {  
    //     printf("%s ",str[i]);
    //     printf("\n%s ",str1);
    //     //str++;
    // }
    int i = 0;
    printf("%s 1 - %d bytes \n",str,sizeof(str));
    printf("%s 1 - %d bytes \n",str1,sizeof(str1));
    // while (*(st+i) != '\0') {
    //     printf("%s \n",st[i]);
    //     i++;
    // }
    printf("%s 1 - %d bytes \n",*st,sizeof(*st));
    
    printf("%s\n",*st);
    printf("%u\n",&st[1]);
    printf("%u\n",&st);
    printf("%u\n",st);
    printf("%u\n",&st[0]);
    printf("%d\n",sizeof(st));  //st is the pointer to the string and it points to the first element and contains its address 
    // or you can access string elements using pointers
    // while (*(str + i)!= '\0') {
    //     printf("%s - %d \n",str,i);
    //     i++;
        
    // }

    return 0;
}