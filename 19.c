#include<stdio.h>
void main()
{
    int n,n1=1,i;
    scanf("%d",&n);
    {
        for(i=n;i>0;i--)
        {
          n1=n1*i;
          
        }
        printf("%d",n1);
    }
}
