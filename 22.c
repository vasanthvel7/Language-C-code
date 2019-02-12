#include <stdio.h>
void main()
{
  int a[3],i,max;
  max=a[0];
  for(i=0;i<3;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<3;i++)
  {
  if(a[i]>max)
  {
      max=a[i];
  }
  }
  printf("\n%d",max);
  
}
