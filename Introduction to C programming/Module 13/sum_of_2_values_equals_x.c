#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&s[i]);
    }
    int x;
    scanf("%d",&x);

    int flag=0;
    //Logic
    for (int i = 0; i <n-1; i++) //
    {
        for (int j = i+1; j < n; j++) //
        {
            if (s[i]+s[j]==x)
            {
                flag=1;
                printf("YES\n");
                printf("%d %d",s[i],s[j]);
                break;
            }
        }
        
    }

    if (flag==0)
    {
        printf("NO");
    }
    
    return 0;
}