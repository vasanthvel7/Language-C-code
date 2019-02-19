#include<stdio.h> 
#include<stdbool.h> 
#include<math.h> 
bool isPowerOfTwo(int n) 
{ 
   return (ceil(log2(n)) == floor(log2(n))); 
} 
int main() 
{ 
    int n;
    scanf("%d",&n);
    isPowerOfTwo(n)? printf("Yes\n"): printf("No\n"); 
    return 0; 
} 
  
