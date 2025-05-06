#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    // scanf(" %d %f %c", &a,&b,&c);
    //Or
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c); //char input nebar somoy ekta space use krbo ekhane
                    // cz input.txt te amra normally ekta space/enter use kore then char likhi
                    // tai ekhaneo space dite hbe r naile code onujayi se space/enter k ekta char dhore felbe
                    // tai tokhon r main char print na hoye space print hoi jabe karon space/enter is a char
                    //kintu integer ba float er khetre dekha jay se totokkhon w8 kore jotokkhon na kono
                    // integer ba float value input e pacche...ekhetre majhkhane space/enter problem kre na
                    // cz space/enter holo character egula int ba float na tai egula se skip kore jay
    printf("%d\n%.3f\n%c",a,b,c);
    return 0;
}