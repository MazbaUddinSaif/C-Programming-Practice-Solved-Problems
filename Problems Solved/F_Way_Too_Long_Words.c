#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char s[101];
        scanf("%s", &s);
        int size = strlen(s);
        if (size<=10)
        {
            printf("%s\n",s);
        }
        else
        {

            int size1=strlen(s)-2;
            printf("%c%d%c\n",s[0],size1,s[size-1]);
        }
        
    }

    return 0;
}