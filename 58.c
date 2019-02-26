#include<stdio.h>
void main()
{
    int n,k,a[10],i,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            count=count+1;
        }
        
    }
if(count!=0)
{
    printf("yes");
}
else
{
    printf("no");
}
}
