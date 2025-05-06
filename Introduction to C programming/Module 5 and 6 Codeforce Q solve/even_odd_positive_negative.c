#include <stdio.h>
int main()
{
    int a, count1 = 0, count2 = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (a % 2 == 0)
        {
            count1 += 1;
        }
        else
        {
            count2 += 1;
        }
    }
    printf("Even: %d", count1);
    printf("Odd: %d", count2);

    return 0;
}