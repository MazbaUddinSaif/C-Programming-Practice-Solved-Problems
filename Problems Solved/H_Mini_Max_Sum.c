#include <stdio.h>
#include <limits.h>
int main()
{
    long long int arr[5], sum[5] = {0};
    long long int su = 0;
    long long int max = LLONG_MIN;
    long long int min = LLONG_MAX;

    for (int i = 0; i < 5; i++)
    {
        scanf("%lld ", &arr[i]);
        su = su + arr[i];
    }
    long long int tmp = 0;
    for (int i = 0; i < 5; i++)
    {
        tmp = su - arr[i];
        if (tmp > max)
        {
            max = tmp;
        }
        if (tmp < min)
        {
            min = tmp;
        }
    }
    printf("%lld %lld", min, max);
    return 0;
}