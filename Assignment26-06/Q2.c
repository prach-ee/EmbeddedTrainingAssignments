// program to swap nibble
#include <stdio.h>

typedef union string{
    unsigned char a;
    struct byte{
        unsigned char b1:4;
    unsigned char b2:4;
    }by;
}st;
int main() {
    st s;
    s.a=63;
    printf("%ld\n",sizeof(st));
    printf("nibble before swap\n%d %d  \n",s.by.b1,s.by.b2);
    unsigned char temp;
    temp=s.by.b1;
    s.by.b1=s.by.b2;
    s.by.b2=temp;
    printf("nibble after swap\n%d %d  \n",s.by.b1,s.by.b2);
    return 0;
}
//output
//1
//nibble before swap
//15 3  
//nibble after swap
//3 15 
