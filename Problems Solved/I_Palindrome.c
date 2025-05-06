#include <stdio.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    int size = strlen(s);   
    int palindrome= 1;
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        if (s[i] != s[j])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}