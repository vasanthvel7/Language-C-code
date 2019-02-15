#include <stdio.h>
int par(int a[],int beg,int end)
{
    int left,right,temp,loc,flag;
    loc=left=beg;
    right=end;
    flag=0;
    while(flag!=0)
    {
        while(a[loc]<=a[right]&&(loc!=right))
            right--;
            if(loc==right)
            beg=1;
            else if(a[loc]>a[right])
            {
                temp=a[loc];
                a[loc]=a[right];
                a[right]=temp;
                loc=right;
            }
            if(flag!=1)
            {
                while(a[loc]<=a[left]&&(loc!=left))
                left++;
                if(loc==left)
                flag=1;
                else if(a[loc]<a[left])
                {
                temp=a[loc];
                a[loc]=a[left];
                a[left]=temp;
                loc=left;
                }
                    
                
            }
    }
    return 0;
}
void quick(int a[],int beg,int end)
{
    int loc;
    if(beg<end)
    {
        loc=par(a,beg,end);
        quick(a,beg,loc-1);
        quick(a,loc-1,end);
    }
}
void main()
{
  int a[50],n,i,beg,end,n1=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  quick(a,n1,n-1);
  for(i=0;i<n;i++)
      printf("%d",a[i]);
}
