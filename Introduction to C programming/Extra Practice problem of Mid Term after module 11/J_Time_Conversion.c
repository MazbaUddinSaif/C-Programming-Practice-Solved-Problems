#include <stdio.h>
int main()
{
    char s[10];
    scanf("%s", &s);
    if (s[8] == 'P')
    {
        if (s[0] == '1' && s[1] == '2')
        {
            s[0] = '1';
            s[1] = '2';
            for (int i = 0; i < 8; i++)
            {
                printf("%c", s[i]);
            }
        }
        
        else
        {
            int a = s[0] - 48 + 1;
            int b = s[1] - 48 + 2;
            s[0] = a + 48;
            s[1] = b + 48;
            for (int i = 0; i < 8; i++)
            {
                printf("%c", s[i]);
            }
        }
    }
    else
    {
        if (s[0] == '1' && s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
            for (int i = 0; i < 8; i++)
            {
                printf("%c", s[i]);
            }
        }
        else
        {

            for (int i = 0; i < 8; i++)
            {
                printf("%c", s[i]);
            }
        }
    }

    return 0;
}