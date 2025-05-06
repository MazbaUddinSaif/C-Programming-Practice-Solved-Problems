#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int c0 = 0, c1 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
        if (a[i] == 0)
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }
    printf("%d %d", c0, c1);

    return 0;
}