#include <stdio.h>
#include <limits.h>
void main(){
    printf("%d\n", CHAR_MAX);
    printf("%d\n", UINT_MAX);
    unsigned int a = 2147483648;
    printf("%d", a);
    return;
}