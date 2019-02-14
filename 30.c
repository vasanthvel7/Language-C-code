#include<stdio.h>
void main()
{
    int hr1,hr2,min1,min2,sub1,sub2,sub3,sub4;
    scanf("%d %d",&hr1,&min1);
    scanf("%d %d",&hr2,&min2);
    if(hr1>hr2)
    {
    if(min1>min2)
    {
    sub1=hr1-hr2;
    sub2=min1-min2;
    printf("%d %d",sub1,sub2);
    }
    }
    else
    {
    sub3=hr2-hr1;
    sub4=min2-min1;
    printf("%d %d",sub3,sub4);
    }
    
}
