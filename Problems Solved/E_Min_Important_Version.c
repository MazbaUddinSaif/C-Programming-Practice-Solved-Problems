#include <stdio.h>
#include<limits.h> //ei header file lagbe INT_MAX er jnno

int main()
{
    int n;
    int val;
    int max = INT_MAX; //INT_MAX holo int er sobcheye boro shonkha jeta neg e sobcheye min...
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d", &val);
        if (val < max)
        {
            max = val;
        }
    }
    printf("%d", max);
    return 0;
}