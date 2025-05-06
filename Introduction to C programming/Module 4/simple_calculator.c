#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b,sub=a-b;
    long long int mul=(long long int)a*b;
    
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d * %d = %lld\n",a,b,mul);
    printf("%d - %d = %d\n",a,b,sub);
    
    
    return 0;
}