#include<stdio.h>
int main()
{
    //NON STANDARD WAY:
    //char a[5]={'S','a','i','f','\0'}; //ekhetre last e null value er jnno ekta extra index nitei hbe and okhane khali rakhleo prob nai abr '\0' likhleo prob nai
                                    //r nahole Saif�# erokom garbage value dekhabe
    
    //STANDARD WAY:
    char a[5] ="Saif";
    char b[50] ="Saif is a good boy.";
    printf("%s\n%s",a,b);
    return 0;
}