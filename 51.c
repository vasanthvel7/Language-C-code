#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    int c1;
	char c[100];
	gets(c);
	c1=strlen(c);
	for(i=0;i<c1;i++)
	{
	    printf("%c\t",c[i]);
	}
	return 0;
	
}
