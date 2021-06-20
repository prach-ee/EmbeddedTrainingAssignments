#include<stdio.h>
//print decimal to binary
void DecToBin(int n){
if(n==0)
return;
else{
int rem=n%2;
int res=n/2;
DecToBin(res);
printf("%d ",rem);
}
}

int main() 
{
int num;
scanf("%d",&num);
DecToBin(num);
}
