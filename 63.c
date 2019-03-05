#include<stdio.h>
int main()
{
    int a[10],i,min;
    printf("INPUT:");
    for(i=1;i<10;i++)
    {
        scanf("%d\t",&a[i]);
    }
    min=a[0];
    for(i=1;i<10;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("OUTPUT:");
    printf("%d",min);
    return 0;
}
