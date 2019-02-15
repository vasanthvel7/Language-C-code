#include<stdio.h>
void main()
{
   char s[20];
   int i,len=1,l;
   gets(s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
     if(s[i]=='.')
     {
     len++;
     }
   }
   printf("%d",len);
}
