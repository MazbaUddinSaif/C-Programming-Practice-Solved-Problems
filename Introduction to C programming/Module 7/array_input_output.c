#include <stdio.h>
int main()
{
    //int ar[5];
    //scanf("%d %d %d %d %d",&ar[0],&ar[1],&ar[2],&ar[3],&ar[4]);
    //printf("%d %d %d %d %d",ar[0],ar[1],ar[2],ar[3],ar[4]);
    //or easiest way is:
    int ar[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d ", &ar[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ar[i]);
    }

    return 0;
}