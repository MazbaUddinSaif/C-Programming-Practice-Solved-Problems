#include <stdio.h>
int main()
{
    char s[10001];
    scanf("%s", &s);

    int c[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        int val = s[i] - 'a';
        c[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (c[i] > 0)
        {
            printf("%c - %d\n", i + 'a', c[i]);
        }
    }

    return 0;
}