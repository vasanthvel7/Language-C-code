#include<stdio.h>
#include<math.h>
void main()
{
    int num,t,rem,res=0,n1,n2,n=0,i,num1,num2;
    scanf("%d",&n1);
    scanf("%d",&n2);
   for(i=n1;i<=n2;i++)
   {
       num1=i;
       num2=i;
       while(num1!=0)
       {
        num1 /=10;
        n++;
       }
       while(num2!=0)
       {
        rem=num2%10;
        res +=pow(rem,n);
        num2 /=10;
        }
        if(res==i)
       {
       printf("%d\t",i);
       }
       n=0;
       res=0;
   }
}
