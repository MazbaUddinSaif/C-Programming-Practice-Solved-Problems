#include <stdio.h>
/*
Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.

Example
Input
5
1 8 5 7 5
Output
8
*/

int main()
{
    int n;
    int val;
    int max = 0; //ekhetre max variable e 0 rakhle hobe initially...karon N er input limit positive deoya ache ques e...
                //jodi negative deya thakto taile ei program e vul ashto ans cz tokhon always 0 ashto ans
                //tai oi khetre E_MAX_Important_Version.c program ta onujayi korte hbe jekhane
                //limits.h header file niye max e initially INT_MIN rakhte hbe jeta mainly integer er lowest value.
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d", &val);
        if (val > max)
        {
            max = val;
        }
    }
    printf("%d", max);
    return 0;
}