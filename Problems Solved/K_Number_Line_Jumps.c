#include <stdio.h>
int main()
{
    int x1, v1;
    int x2, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    int s1 = x1, s2 = x2;
    int c = 0;
    for (int i = 1; i <= 10000; i++)
    {
        s1 = s1 + v1;
        s2 = s2 + v2;
        if (s1 == s2)
        {
            c++;
        }
    }
    if (c > 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}