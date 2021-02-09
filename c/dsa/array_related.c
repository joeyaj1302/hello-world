#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch[] = "array";
    char *ptr = ch;
    printf("%u - %u", ch,ptr+2);
    return 0;
}