#include<stdio.h>
void main()
{
    int a,b,temp;
    scanf("%d",&a);
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    
}
