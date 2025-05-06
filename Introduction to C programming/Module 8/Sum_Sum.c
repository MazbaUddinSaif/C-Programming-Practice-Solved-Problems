#include<stdio.h>
int main()
{
    int n;
    int var,s1=0,s2=0;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d",&var);
        if (var>=0)
        {
            s1+=var;
        }
        else
        {
            s2+=var;
        }
        
    }
    printf("%d %d",s1,s2);
    
    return 0;
}