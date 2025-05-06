#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break; // break always loop er vitore likhte hy
        }

        printf("%d\n", i);
    }

    // see the difference in output

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);

        if (i == 5)
        {
            break;
        }
    }

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        break; 
    }
}