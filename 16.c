#include <stdio.h>
int main()
{
    int low, high, i, flag;
   scanf("%d %d", &low, &high);
    while (low < high)
    {
        flag = 0;

        for(i = 1; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
         if(low>i)
            printf("%d ", low);

        ++low;
    }

    return 0;
}
