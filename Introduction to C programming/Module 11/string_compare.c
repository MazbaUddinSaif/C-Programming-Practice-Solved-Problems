#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int i = 0;
    while (1)
    {
        // 6 ta case thake
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A is smaller");
            break;
        }

        else if (b[i] == '\0')
        {
            printf("B is smaller");
            break;
        }
        // uporer 3 ta condition holo string shesh hoi gese etar

        else if (a[i] < b[i])
        {
            printf("A is smaller");
            break;
        }

        else if (a[i] > b[i])
        {
            printf("B is smaller");
            break;
        }
        else if (a[i] == b[i])
        {

            i++;
        }
        //uporer 3 ta condition holo string shesh hy nai etar
    }


    return 0;
}