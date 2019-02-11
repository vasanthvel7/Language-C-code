int main()
{
     int a, d, n, i, tn;
     int sum = 0;
 
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     tn = a + (n - 1) * d;
     printf("%d ",sum);
     return 0;
}
