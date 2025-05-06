#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int c = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            c++;
        }
        else
        {
            b++;
        }
    }
    if (b > c)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                printf("%d", i + 1);
            }
        }
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                printf("%d", i + 1);
            }
        }
    }
    return 0;
}