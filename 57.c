#include<stdio.h>
void main()
{
    int n,k,a[10],i,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        if(a[i]==k)
        {
            count=count+1;
        }
        
    }
    printf("%d",count);
}
