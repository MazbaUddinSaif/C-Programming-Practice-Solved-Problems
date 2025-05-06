#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int x,v;
    scanf("%d %d",&x,&v);
    ar[x]=v;
    for (int j = n-1; j >=0 ; j--)
    {
        printf("%d ",ar[j]);
    }
    
    
    return 0;
}