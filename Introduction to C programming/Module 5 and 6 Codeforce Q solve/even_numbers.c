#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int count=0;
    for(int i=1;i<=a;i++)
    {
        if (i%2==0)
        {   
            count+=1;
            printf("%d\n",i);
        }
        
    }
    if (count==0)
    {
        printf("-1");
    }
    
    return 0;
}