#include<stdio.h>
void main()
{
    int hr,min;
    scanf("%d",&min);
    while(min>60)
    {
        hr++;
        min=min-60;
    }
    printf("%d:%d",hr,min);
}
