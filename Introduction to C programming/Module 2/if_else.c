#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk>=100)
    {
        printf("Burger khabo\n");            
    }
    else
    {
        printf("Burger khabo na\n");
    }

//important
    if(-1)              //if e condition e 0 chara onno kichur jnno eta true and if part follow krbe
    {
        printf("mazba \n");
    }
    else
    {
        printf("fahim");
    }
    if(0)               //if e condition e 0 dile eta false and else part follow krbe
    {
        printf("alu \n");
    }
    else
    {
        printf("chona");
    }

    
    return 0;
}

//if block e condition ekta thakle { } ei bracket use na korleo hy;