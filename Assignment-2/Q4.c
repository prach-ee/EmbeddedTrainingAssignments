#include <stdio.h>
int main()
{
    int x=10,y=3;
    {
     int x=100,z=10;//here z is local variable
    printf("%d %d\n",x,z);
    }
    printf("%d %d\n",x,z);//throw error as z is not declared
}
