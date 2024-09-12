
#include <stdio.h>

int main(){
    unsigned char uchar;
    signed char schar;
    double n1;
    long double n2;
    unsigned int n3;
    signed int n4;
    short n5;
    long n6;
    long long n7;
    void;

    /* Size of data type
       %lu: used for 'unsigned long' values
       %zu: used for 'size_t' values
    */ 

    printf("uchar size    : %zu bytes\n", sizeof(uchar));
    printf("schar size    : %zu bytes\n", sizeof(schar));
    printf("double size   : %zu bytes\n", sizeof(n1));
    printf("ldouble size  : %zu bytes\n", sizeof(n2));
    printf("uint size     : %zu bytes\n", sizeof(n3));
    printf("sint size     : %zu bytes\n", sizeof(n4));
    printf("short size    : %zu bytes\n", sizeof(n5));
    printf("long size     : %zu bytes\n", sizeof(n6));
    printf("long long size: %zu bytes\n", sizeof(n7));
    printf("void size     : %zu bytes\n", sizeof(void()));
    printf("size_t size   : %zu bytes\n", sizeof(size_t));

    

    return 0;
}
