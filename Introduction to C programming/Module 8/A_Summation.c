#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    long long int sum=0;
    for (int h = 0; h <n; h++)
    {
        scanf("%d ",&a[h]);
        sum=sum+a[h];
    }
    if(sum<0)
    {
        sum=sum-2*sum;
    }
    printf("%lld",sum);
    return 0;
}