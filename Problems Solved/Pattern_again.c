#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = N - 1; i >= 1; i--)
    {
        for (int j = 1; j <= N - i; j++)
        {
            printf(" ", j);
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}