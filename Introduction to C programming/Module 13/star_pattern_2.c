#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n; //modified
    for (int i = 1; i <= n; i++) // for printing lines
    {
        for (int j = 1; j <= star; j++) // for printing stars
        {
            printf("*");
        }

        printf("\n");
        star--;  //modified
    }

    return 0;
}