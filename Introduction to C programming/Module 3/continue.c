#include <stdio.h>
int main()
{
//CONTINUE ekhetre means SKIP..Continue basically  loop er j jaygay 
//thake tar niche loop er end part mane } prjnto
// sob kaj ekbar skip kore abr loop e back kore 

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; // continue always loop er vitore likhte hy
                      //continue er nicher task e 5 print hoto bt se ekhon etake skip kore abr loop e back krse...tai 5 chara bakigula print hobe
        }

        printf("%d\n", i);
    }

// see the difference in output

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);

        if (i == 5)
        {
            continue; //ekhetre loop e continue er niche r kicchu nai tai sob print hobe thikthak
        }
    }

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        continue; //ekhetreo sob print hobe 
    }
}