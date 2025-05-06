#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk>=100)
    {
        printf("Burger Khabo\n");
    }
    else if(tk>=50) // if r else er majhkhane joto iccha toto else if condition lekha jabe
    {
        printf("Fuchka khabo\n");
    }
    else if (tk>=20)
    {
        printf("Chips khabo\n");
    }
    else
    {
        printf("kichui khabo na\n");
    }

//if block e condition ekta thakle { } ei bracket use na korleo hy;
    if(tk>=100)

        printf("Burger Khabo");
    
    else if(tk>=50) // if r else er majhkhane joto iccha toto else if condition lekha jabe
    
        printf("Fuchka khabo");
    
    else if (tk>=20)
    
        printf("Chips khabo");
    
    else
    
        printf("kichui khabo na");
    


    return 0;
}