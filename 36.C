#include <stdio.h>
int main()
{
    char s[1000];
    int c=0,j;
    gets(s);
    for(j = 0; s[j] != '\0'; j++)
    {
        if(s[j]=='.' || s[j]==','|| s[j]=='$'|| 
        s[j]=='@'|| s[j]=='_'|| s[j]=='-'|| 
        s[j]=='#'|| s[j]=='^'|| s[j]=='*'|| s[j]=='+')
        c++;
    }
    printf("%d", c);
    return 0;
}
