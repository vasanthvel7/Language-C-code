#include <stdio.h>
void main()
{
    char str[20];
    int i,count,count1;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!='0'&&str[i]!='1')
        count=count+1;
        else
        count1=count1+1;
    }
    if(count==0)
    {
        if(count1!=0)
        printf("yes");
        else
        printf("no");
        
    }
    else
    {
        printf("no");
    }
    
}
