#include <stdio.h>
void main()
{
  int a[3],i,min;
  min=a[0];
  for(i=0;i<3;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<3;i++)
  {
  if(a[i]<min)
  {
      min=a[i];
  }
  }
  printf("\n%d",min);
  
}
