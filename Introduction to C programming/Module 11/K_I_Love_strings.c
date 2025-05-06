#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int t = 0; t < n; t++)
    {
        char a[51], b[51];
        scanf("%s %s", a, b);

        int i = 0, j = 0;
        while (a[i] != '\0' && b[j] != '\0')  // print until one string ends
        {
            printf("%c%c", a[i], b[j]);
            i++;
            j++;
        }

        // If a has remaining characters
        while (a[i] != '\0')
        {
            printf("%c", a[i]);
            i++;
        }

        // If b has remaining characters
        while (b[j] != '\0')
        {
            printf("%c", b[j]);
            j++;
        }

        printf("\n"); // after each test case
    }

    return 0;
}
