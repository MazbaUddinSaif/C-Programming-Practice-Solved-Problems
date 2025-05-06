#include<stdio.h>
int main()
{
    char a[1000001]; //according to constrain
    fgets(a,1000001,stdin);

    for (int i = 0; a[i]!='\\' ; i++)
    {
        printf("%c",a[i]); //ekta ekta kore character print krbo tai %c dbo
    }
    
    return 0;
}