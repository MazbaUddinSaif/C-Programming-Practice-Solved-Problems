#include <stdio.h>
int main()
{
    int x, y, alt;
    int n;
    scanf("%d", &n);
    for (int h = 1; h <= n; h++)
    {

        scanf("%d %d", &x, &y);
        if (x > y) // assumed that y is always greater than x
        {
            alt = y;
            y = x;
            x = alt;
        }
        int sum = 0;
        for (int i = x+1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}