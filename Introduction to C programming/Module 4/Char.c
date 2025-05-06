#include <stdio.h>
int main()
{
    int ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c", ch);
    }
    else
    {
        ch = ch + 32;
        printf("%c", ch);
    }

    return 0;


//othoba

    // int main()
    //  int ch;
    // scanf("%c", ch);
    // if (ch > +97)
    // {
    //     ch = ch - 32;
    //     printf("%c", ch);
    // }
    // else if (ch < 97)
    // {
    //     ch = ch + 32;
    //     printf("%c", ch);
    // }
    // return 0;
}