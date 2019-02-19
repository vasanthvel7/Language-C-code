#include<stdio.h>
void main()
{
    int a[30],n,i,min,max;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=0;
    for(i=1;i<=n;i++)
    {
    while(max<a[i])
    {
        max=a[i];
        i++;
    }
    }
    min=a[0];
    i=n;
    for(i=0;i<n;i++)        
    if(a[i]>min)
    {
        min=a[i];
        i++;
    }
    printf("%d %d",min,max);
}
