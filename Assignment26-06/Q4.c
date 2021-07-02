// program to clear/set/toggle a bit of a number
#include <stdio.h>

#define bit_clear(num,pos) (num & ~(1<<pos))
#define bit_set(num,pos) (num | (1<<pos))
#define bit_toggle(num,pos) (num ^ (1<<pos))
int main() {
    printf("%d \n",bit_clear(7,0));
    printf("%d \n",bit_set(4,0));
    printf("%d \n",bit_toggle(4,0));
    return 0;
}
//input num 7=111
//output num 6=110 i.e. 0th bit cleared
//input num 4=100
//output num 5=101 i.e. 0th bit set
//input num 5=100
//output num 6=101 i.e. 0th bit toggled
