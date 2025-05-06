#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    if (n % 2 == 0)
    {
        for (int j = n - 1; j >= 0; j -= 2)
        {

            printf("%d ", ar[j]);
        }
    }
    else
    {
        for (int j = n - 2; j >= 0; j -= 2)
        {

            printf("%d ", ar[j]);
        }
    }

    return 0;
}