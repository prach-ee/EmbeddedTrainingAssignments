//program to fnd sum of digits untill it reduces to 1 digit
#include <stdio.h>
int Sum(int num);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",Sum(n));
    return 0;
}
int Sum(int num)
{
    int sum = 0;

    while(num > 0 || sum > 9)
    {
        if(num == 0)
        {
            num = sum;
            sum = 0;
        }
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
