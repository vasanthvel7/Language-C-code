#include<stdio.h>
#include<conio.h>
void main()
{
int N,K,n[5],i,sum;
printf("Enter the no of values:");
scanf("%d",&N);
printf("Enter the no of values:");
scanf("%d",&K);
printf("Enter the values:");
for(i=1;i<=5;i++)
{
scanf("%d",&n[i]);
}

for(i=0;i<=K;i++)
{
sum=sum+i;
}
printf("sum of K:%d",sum);
}
}


