#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if (a>='0' && a<='9')
    {    
        printf("IS DIGIT");
    }
    else if (a>='A' && a<='Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if (a>='a' && a<='z')
    {
        printf("ALPHA\nIS SMALL");
    }
    return 0;
}