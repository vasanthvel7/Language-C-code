#include<stdio.h>
void concat(char p[], char q[]) {
   int c, d;
   
   c = 0;
 
   while (p[c] != '\0') {
      c++;      
   }
 
   d = 0;
 
   while (q[d] != '\0') {
      p[c] = q[d];
      d++;
      c++;    
   }
 
   p[c] = '\0';
}
void main()
{
    char s[10],c[10];
    gets(s);
    gets(c);
   
    concat(s,c);
    printf("%s",s);
}
