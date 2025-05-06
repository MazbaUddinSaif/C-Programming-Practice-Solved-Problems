#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int h = 0; h < n; h++)
    {
        scanf("%d", &a[h]);
    }
    int index;
    scanf("%d",&index);
    for (int i = index; i < n-1; i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for (int k = 0; k < n; k++)
    {
        printf("%d ",a[k]);
    }
    
    
    return 0;
}