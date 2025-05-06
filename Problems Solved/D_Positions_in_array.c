#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int h = 0; h <n; h++)
    {
        scanf("%d ",&a[h]);
        if (a[h]<=10)
        {
            printf("A[%d] = %d\n",h,a[h]);
        }
        
    }
    
    return 0;
}