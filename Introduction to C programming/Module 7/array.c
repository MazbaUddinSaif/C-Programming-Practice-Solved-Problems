#include<stdio.h>
int main()
{
    int array[5];
    array[2]=10;
    array[0]=100;
    array[1]=20;
    printf("%d\n%d\n%d",array[2],array[0],array[1]);
    return 0;
}