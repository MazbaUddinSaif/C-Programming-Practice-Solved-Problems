#include <stdio.h>
int main()
{
    int alice[3], bob[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &alice[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &bob[i]);
    }
    int a = 0, b = 0;
    for (int i = 0; i < 3; i++)
    {
        if (alice[i] > bob[i])
        {
            a++;
        }
        else if (alice[i] < bob[i])
        {
            b++;
        }
    }
    printf("%d %d", a, b);
    return 0;
}