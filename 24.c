   #include <stdio.h>
    void main()
    {
 
        int i, j, a, number[20],n;
        scanf("%d",&n);
        for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
