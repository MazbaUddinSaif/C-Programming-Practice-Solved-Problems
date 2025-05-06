#include <stdio.h>
// 1) Take a number from user and check if its a even number or odd number.
//- ans below
// 2) Take a number from user and check if its a positive or negative number.
// - ans below
// 3) Explain if else ladder.
// -multiple condition and output  
int main()
{
    int a;
    scanf("%d", &a);
    if (a > 0)
    {
        printf("The number is positive\n");
    }
    else if (a < 0)
    {
        printf("The number is negative\n");
    }
    else
    {
        printf("The number is neither positive nor negative.It's neutral\n");
    }
    if (a % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }

    return 0;
}