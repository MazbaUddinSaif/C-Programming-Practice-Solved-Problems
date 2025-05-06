#include <stdio.h>
int main()
{
    int j = 1;
    while (j <= 10)
    {
        printf("%d\n", j);
        j = j + 1;
    }

    int i=1;
    while (i<=10)
    {
        if(i%2 == 0)
        {
            printf("%d - Even Number\n",i);
        }
        else
        {
            printf("%d - Odd Number\n",i);
        }
        i++;
    }
    
    return 0;
}

/*

WHILE LOOP STRUCTURE:

initializaion;
while( end condition)
{
    //code
 increment/decrement;
}

*/