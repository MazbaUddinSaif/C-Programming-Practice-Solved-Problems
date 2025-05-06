#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    scanf("%s",&a);

    int size = strlen(a); //strlen( String_Name ) built in function diye string length ber kora jay ...ejonno eta store korte hy kono ekta int variable e
    printf("%d",size); //jodi code run na kore taile #include<string.h> header file likhbo first e
    return 0;
}