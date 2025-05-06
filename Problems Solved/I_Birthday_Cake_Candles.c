#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int max = INT_MIN;
    int count = 0;
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
        if (a[i] == max)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}