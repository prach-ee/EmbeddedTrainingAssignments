#include<stdio.h>
//print N to 1
int fun(int n){
if(n==1)
return 1;
else{
printf("%d ",n);
return fun(n-1);
}
}

int main() 
{
int num;
scanf("%d",&num);
printf("%d",fun(num));
}
