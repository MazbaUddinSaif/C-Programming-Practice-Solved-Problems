#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int length_a=strlen(a);
    int length_b=strlen(b);
 
    for (int i = 0; i <=length_b; i++) //b k a er pashe add krbo and b er null value prjnto sob character k a te nite hbe tai <-
    {
        a[i+length_a]=b[i]; //a[i+length_a] likhi cz nahole a tei print hoye jabe b,,,copy er moton
    }
    printf("%s %s",a,b);
    
    return 0;
}