#include <stdio.h>
int main()
{
// for number series
    for (int i = 1; i <= 10; i += 1)
    {
        printf("%d \n", i);
    }
// for odd number series
    for (int i = 1; i <= 10; i += 2)
    {
        printf("%d \n", i);
    }
// for even number series
    for (int i = 0; i <= 10; i += 2)
    {
        printf("%d \n", i);
    }
//type 100 to 1
    for(int i=10 ; i>=1 ;i-=1)
    {
        printf("%d \n",i);
    }
    return 0;
}