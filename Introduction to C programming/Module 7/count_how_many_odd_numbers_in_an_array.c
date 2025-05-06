#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int h = 0; h <n; h++)
    {
        scanf("%d ",&a[h]);
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==1)
        {
            count+=1;
        }
        
    }
    printf("%d",count);
    return 0;
}