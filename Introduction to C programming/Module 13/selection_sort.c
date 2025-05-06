#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Ascending Order
    for (int i = 0; i < n - 1; i++) //
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }

    // Descending Order
    // for (int i = 0; i < n - 1; i++) //
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (a[i] > a[j])
    //         {
    //             // serial ok
    //         }
    //         else
    //         {

    //             int tmp = a[j];
    //             a[j] = a[i];
    //             a[i] = tmp;
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++) // printing
    {
        printf("%d ", a[i]);
    }

    return 0;
}