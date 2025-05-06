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
    
    for (int i = 0; i <10; i++)
    {
        if (a[i]%2==0)
        {
            printf("%d\n",a[i]);
        }
        
    }
    
    return 0;
}