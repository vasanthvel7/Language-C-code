#include<stdio.h>
int main()
{
   int n,count,i;
   scanf("%d",&n);
   for(i=1;i<n/2;i++)
   {
       if((n%i)==0)
       {
           count=count+1;
       }
   }
   if(count==0)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
   return 0;
}
