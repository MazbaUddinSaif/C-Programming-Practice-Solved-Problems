#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int min= INT_MAX;
    for (int h = 0; h <n; h++)
    {
        scanf("%d ",&a[h]);
        if (a[h]<min)
        {
            min=a[h];
        }
        
    }
    printf("%d",min);
    return 0;
}