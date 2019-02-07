#include<stdio.h>
void main()
{
    int num,t,rem,res;
    scanf("%d",&num);
    t=num;
    while(t!=0)
    {
        rem=t%10;
        res +=rem*rem*rem;
        t /=10;
    }
    if(res==num)
        printf("yes");
    else
        printf("no");
    
}
