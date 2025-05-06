#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        char s[10001];
        scanf("%s", &s);
        int c[3] = {0};
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                c[0]++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                c[1]++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                c[2]++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}