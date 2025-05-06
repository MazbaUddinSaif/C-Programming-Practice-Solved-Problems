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
    int x,c=0;
    scanf("%d",&x);
    for (int i = 0; i <n; i++)
    {
        if(a[i]==x)
        {
            printf("%d",i);
            c+=1;
            break;
        }
        
     
    }
    if(c==0)
    {
        printf("-1");
    }

    return 0;
}