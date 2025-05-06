#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int min=INT_MAX;
    int position;
    int h=1;
    for ( ; h <n; h++)
    {
        scanf("%d ",&a[h]);
        if(a[h]<min)
        {
            min=a[h];
            position=h;
         
        }
    }
    printf("%d %d",min,position);
    
    return 0;
}