#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int ans = 1;
    for (int i = 1; i <= t; i++)
    {
        int m1, d, m2;
        scanf("%d %d %d", &m1, &m2, &d);
        ans = d - ((m1 * d) / (m1 + m2));
        printf("%d\n", ans);
    }

    return 0;
}