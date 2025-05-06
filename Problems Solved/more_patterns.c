// PATTERN-1:::

/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++) //for printing lines
    {
        for (int k = 1; k <= space; k++) //for printing space
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++) //for printing stars
        {
            printf("*");
        }

        printf("\n");
        star ++; // modified
        space--;
    }

    return 0;
}
*/

// PATTERN-2:::

/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1+(n-1)*2; //Modified
    int space = 0;
    for (int i = 1; i <= n; i++) //for printing lines
    {
        for (int k = 1; k <= space; k++) //for printing space
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++) //for printing stars
        {
            printf("*");
        }

        printf("\n");
        star -=2; // modified
        space++;
    }

    return 0;
}
*/


// PATTERN-3:::

/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("%d ", j); //with space
        }

        printf("\n");
        star++;
        space--;
    }

    return 0;
}
*/


//PATTERN-4:::
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("%d", j); //without space
        }

        printf("\n");
        star++;
        space--;
    }

    return 0;
}