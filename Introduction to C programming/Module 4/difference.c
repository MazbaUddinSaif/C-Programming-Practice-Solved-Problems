#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    long long int dif=((long long int)a*b)-((long long int)c*d);
    
    printf("Difference = %lld",dif);
    
    
    return 0;
}