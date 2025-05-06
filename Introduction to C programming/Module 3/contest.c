#include <stdio.h>
int main()
{
    int N,rem;
    scanf("%d", &N);
    if(N>1000)
    {
        printf("I will buy Punjabi\n");
        rem=N-1000;
        if(rem>=500)
        {
            printf("I will buy new shoes\nAlisha will buy new shoes");
        }
        
    }
    else
    {
        printf("Bad luck!\n");
    }
    return 0;
}