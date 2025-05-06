#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int max= INT_MIN;
    for (int h = 0; h <n; h++)
    {
        scanf("%d ",&a[h]);
        if (a[h]>max)
        {
            max=a[h];
        }
        
    }
    printf("%d",max);
    return 0;
}