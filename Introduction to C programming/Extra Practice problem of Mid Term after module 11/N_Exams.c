#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x,y,z;
    for (int i = 1; i <=n; i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if ((x*y/2)<z)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
    return 0;
}