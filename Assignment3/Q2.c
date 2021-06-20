#include<stdio.h>
//print 1 to N
void fun(int n){
if(n==0)
return;
else{
fun(n-1);
printf("%d ",n);
}
}

int main() 
{
int num;
scanf("%d",&num);
fun(num);
}
