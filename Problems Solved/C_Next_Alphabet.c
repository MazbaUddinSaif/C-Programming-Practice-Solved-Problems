#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    if (n == 'z')
    {
        printf("a");
    }
    else
    {
        printf("%c", (int)n + 1);
    }

    

    return 0;
}