#include<stdio.h>
void main()
{
    int num,rem,t,rev=0;
    scanf("%d",&num);
    t=num;
    while(t!=0)
    {
        rem=t%10;
        rev=rev*10+rem;
        rem/=10;
    }
    if(rev==num)
    printf("yes");
    else
    printf("no");
}
