#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    //int fre[m+1] ={0}; //variable size array evabe ekline e initialize kora jay na
    //solution-1: int fre[1000001] = {0};
    //soplution-2: loop diye
    int fre[m+1];
    for (int i = 0; i <m+1; i++)
    {
        fre[i]=0;
    }
    

    for (int i = 0; i < n; i++)
    {
        fre[ a[i]]++;
    }
    
    for (int i = 1; i <m+1 ; i++)
    {
        printf("%d\n",fre[i]);
    }
    
    return 0;
}