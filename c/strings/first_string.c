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

void st_copy(char * st , char * st1 , int len) {
    int i = 0;
    while (i < len+1) {
        *(st1 + i) = *(st+i);
        i++;

    }
    // while (*st != '\0') {
    //     *st1 = *st;
    //     st1++;
    //     st++;
    // }
}

int main() {
    char s[7] = "Jithil";
    char *p;
    p = s;
    int l = st_len(p);
    printf("The length of the string is %d \n",l);
    char st[30];
    char * ptr = st;
    st_copy(p,ptr,l);
    printf("%s",st);
    return 0;
}