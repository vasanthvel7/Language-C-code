#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
    int i;
    int c1,count=0,count1=0;
	char c[100];
	gets(c);
	c1=strlen(c);
	for(i=0;i<c1;i++)
	{
	    if(isalpha(c[i]))
	    {
	      count=count+1;  
	    }
	    else if(isdigit(c[i]))
	    {
	      count1=count1+1;
	    }
	 }
	 if(count!=0&&count1!=0)
	 {
	     printf("yes");
	 }
	 else
	 {
	  printf("no");   
	 }
	
	return 0;
	
}
