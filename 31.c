#include<stdio.h>
void main()
{
   char s[20];
   int i,len=0;
   gets(s);
   for(i=0;s[i]!='\0';i++)
   {
       len++;
   }
   printf("%d",len);
}
