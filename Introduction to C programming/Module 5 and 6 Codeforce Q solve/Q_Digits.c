#include <stdio.h>
/*QUES:
Given a number N. Print the digits of that number from right to left separated by space.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109)

Output
For each test case print a single line contains the digits of the number separated by space.

Example
InputCopy
4
121
39
123456
1200
OutputCopy
1 2 1
9 3
6 5 4 3 2 1
0 0 2 1

*/

int main()
{
    int n;
    int val;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &val);
        do
        {
            printf("%d ", val % 10);
            val /= 10;
        } while (val != 0);

        printf("\n");
    }

    return 0;
}
/*Ekhane basically do while loop use korsi karon while loop er khetre
      condition age chk hy and tai input er moddhe kono ekta variable 0 dile
      seta agei false hoto and 0 print hoto na...tai sejonno do while disi
      jar karone input e keo 0 likhleo seta ekbar run hy and then false hy..

      Same problem onnovabeo while loop diyeo kora jay...sejonno normally while loop likhe tar age
      if(val==0)
      {
          printf("0");
      }
      eta likhe dileo hobe
      */