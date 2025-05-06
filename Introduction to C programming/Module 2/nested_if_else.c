#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox'sBazar jabo\n");

        if (tk >= 10000)
        {
            printf("Saint Martin jabo\n");
        }
        else
        {
            printf("Ferot chole asbo\n");
        }
    }
    else
    {
        printf("kothao jabo na\n");
    }
    //else charao just if condition lekha jay
    return 0;
}

