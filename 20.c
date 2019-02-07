#include<stdio.h>
void main()
{
    int n,n1=1,i;
    scanf("%d",&n);
    {
        for(i=1;i<=n;i++)
        {
          n1=i*n;
          printf("%d\t",n1);
        }
    }
}
