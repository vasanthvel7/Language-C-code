#include <stdio.h>
void main()
{
 int i,j,a;
 scanf("%d",&a);
 scanf("%d",&j);
 for(i>a;i<=j;i++)
 {
 if((i%2)!=0)
 {
     printf("%d\t",i);
 }
 i++;
}
}
