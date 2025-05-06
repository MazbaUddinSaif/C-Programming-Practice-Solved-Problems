#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int h = 0; h <n; h++)
    {
        scanf("%d ",&a[h]);
        if(a[h]>0)
        {
            a[h]=1;
        }
        else if(a[h]<0)
        {
            a[h]=2;
        }
    }   
    for (int j = 0; j <n; j++)
    {
        printf("%d ",a[j]);
    }
    
    
    return 0;
}