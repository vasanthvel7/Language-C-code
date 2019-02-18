#include <stdio.h>
int main()
{
int a,n,sum=0,i,t1=1,t2=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  printf("%d, ", t1);
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
}
}
