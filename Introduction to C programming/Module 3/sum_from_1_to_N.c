#include <stdio.h>
int main()
{
    int N;
    int sum=0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i += 1)
    {
        sum+=i; //or sum=sum+i;
    }
    printf("Sum is= %d ", sum);
    return 0;
}