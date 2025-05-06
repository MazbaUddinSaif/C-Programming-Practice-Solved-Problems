#include <stdio.h>
//string kaj na korle #include<string.h> header file nibo
int main()
{
    char a[50];

    /*we can use this to print whole string::(Not Standard) 
    gets( array name );
    printf("%s", string name);
    */
    // gets(a);    
    // printf("%s", a);

    //OR
    
    /*we can use this to print whole string::(STANDARD) 
    fgets( array name , size ,stdin );
    printf("%s", string name);
    */

    fgets(a,17,stdin);
    //fgets er limitation holo eta input e Enter thakle ota prjnto print kore theme jabe bt Enter shoho print kore
    //bt gets e Enter print hy na
    printf("%s",a);
    return 0;
}