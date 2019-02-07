#include<stdio.h>
void main()
{
    int n,n1=1,i;
    scanf("%d",&n);
    {
        for(i=1;i<=5;i++)
        {
          n1=i*n;
          printf("%d\t",n1);
          n1++;
        }
    }
}

