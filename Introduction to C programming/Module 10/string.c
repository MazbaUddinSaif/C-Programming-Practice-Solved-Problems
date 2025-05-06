#include<stdio.h>
int main()
{
    //character array= string. nicher eta string input output er long process...Short process string_input.c file e ache
    char a[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%c",&a[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%c\n",a[i]);
    }
    return 0;
}