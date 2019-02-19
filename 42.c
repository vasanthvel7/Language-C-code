#include<stdio.h>
void main()
{
   char a1[10],a2[10];
   int c1=0,c2=0,c,i;
  scanf("%s %s",&a1,&a2);
   while(a1[c1]!='\0')
   c1++;
   while(a2[c2]!='\0')
   c2++;
  i=0;
  while((i!=c1)&&(i!=c2))
  {
    if(a1[i]==a2[i])
    {
        i++;
        continue;
    }
    if(a1[i]<a2[i])
    {
      c=-1;
      break;
    }
    if(a1[i]>a2[i])
    {
      c=+1;
      break;
    }
      
  }
  if(c==0)
  {
      printf("equal");
  }
  if(c==1)
  {
      printf("%s",a1);
  }
    if(c==-1)
  {
      printf("%s",a2);
  }
   
}
