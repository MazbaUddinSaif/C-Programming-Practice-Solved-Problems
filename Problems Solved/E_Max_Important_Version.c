#include <stdio.h>
#include<limits.h> //ei header file lagbe INT_MIN er jnno

int main()
{
    int n;
    int val;
    int max = INT_MIN; //INT_MIN holo int er sobcheye choto shonkha jeta neg e sobcheye min...
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d", &val);
        if (val > max)
        {
            max = val;
        }
    }
    printf("%d", max);
    return 0;
}