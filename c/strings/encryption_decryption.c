#include <stdio.h>
#include <stdlib.h>
#include<string.h>

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


void encrypt (char *p , int l, int k) {
    int i = 0;
    // while (i<l-1) {       //using lenth of string
    //     *(p+i) = *(p+i) + 1;
    //     i++;
    // }
    while (*p != '\0') {   // a more efficient approach without using str length
        *p = *p + k;
        p++;
    }
}


void decrypt (char * p , int l , int k) {
    // int i = 0; //naive approach
    // while (i<l) {
    //     *(p+i) = *(p+i) - k;
    //     i++;
    // }
    while (*p != '\0') {  //efficient approach without using length of str
        *p = *p - k;
        p++;
    }
}


int main() {
    char str[300];
    int key;
    printf("Enter your message to be encrypted :\n");
    gets(str);
    printf("The string is : %s \n",str);
    printf("Enter your encryption key : \n");
    scanf("%d" , &key);
    char *ptr = str;
    int len = st_len(str);
    printf("The length of the unencrypted string is %d\n",st_len(str));
    encrypt(str,len,key);
    printf("The encrypted string is : %s \n",str);
    printf("The length of the encrypted string is %d\n",st_len(str));
    decrypt(str,len,key);
    printf("The decrypted string is : %s \n",str);
    printf("The length of the decrypted string is %d\n",st_len(str));
    return 0;
}