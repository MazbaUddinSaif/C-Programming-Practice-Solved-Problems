#include <stdio.h>
/*QUES:
Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

Note: The "Correct" password is the number 1999.

Input
The input contains several passwords.

Each line contains a number X (103 ≤ X ≤ 104 - 1).

Output
Print "Wrong" if the password is typed wrong otherwise, print "Correct" if the password is typed correctly.

Example
Input
2200
1020
1999
1000
9999
Output
Wrong
Wrong
Correct
*/

int main()
{
    int pass;
    while (scanf("%d", &pass)) // or while (scanf("%d", &pass !=EOF))
                              // EOF=End Of File. uporer statement means input jotokkhon na end of file prjnto jacche totokkhon input nebo
                              //othoba just input er condition ta while er moddhe likhlei hy...while means jotokkhon
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}

/*OR:

int main()
{
    int pass;
    for( ; scanf("%d", &pass) ; ) // same problem ta for loop diye korte gele 
                                  //initialization and incre/decre part ta khali rakhte hbe 
                                  //just sundor lagar jnno while loop diye kora better cz while(condition)
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}
*/