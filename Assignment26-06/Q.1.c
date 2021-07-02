// print bit of 1 byte character
#include <stdio.h>

typedef union string{
    unsigned char a;
    unsigned char b:1;
    unsigned char c:1;
    unsigned char d:1;
    unsigned char e:1;
    unsigned char f:1;
    unsigned char g:1;
    unsigned char h:1;
}st;
int main() {
    st s;
    s.a=63;
    printf("%ld\n",sizeof(st));
    printf("%d %d %d %d %d %d %d %d \n",s.a,s.b,s.c,s.d,s.e,s.f,s.g,s.h);
    
    return 0;
}
//output
//1
//63 1 1 1 1 1 1 1
