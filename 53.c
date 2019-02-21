#include<stdio.h>
void main()
{
    int a,sum=0,b;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("%d",sum);
}
