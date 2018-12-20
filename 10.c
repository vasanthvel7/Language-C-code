#include<stdio.h>
void main()
{
int count,n;
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("%d:",count);
}
