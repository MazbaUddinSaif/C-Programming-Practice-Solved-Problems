#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    for (int i = 1; i <= n; i++) //for printing lines
    {
        for (int j = 1; j <= star; j++) //for printing stars
        {
            printf("*");
        }

        printf("\n");
        star++;
    }

    return 0;
}