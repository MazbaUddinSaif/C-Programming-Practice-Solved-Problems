#include <stdio.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int size = strlen(s);
    for (int i = 0; i < size; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    printf("%s", s);
    return 0;
}