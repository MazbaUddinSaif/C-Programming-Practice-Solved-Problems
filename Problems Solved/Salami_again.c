#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", max - a[i]);
    }

    return 0;
}