#include<stdio.h>
int main()
{   
    char a[10];
    scanf("%s",&a); //character array= string. String er moja holo ekhnane input output nite loop lage bt string e just character specifier %s use korlei hy
    printf("%s\n",a); //character array= string. String er moja holo ekhnane input output nite loop lage bt string e just character specifier %s use korlei hy
    printf("%c\n",a[2]);
    printf("%d\n",a[7]); //it means 10 index er char array ba string nebar por okhane input jodi 10 er kom dei tahole khali index e garbage value joma hobe
    //string e basically input er por khali index er moddhe first er tate se null ba '\0' character rekhe dey
    //that means Hello er jnno index 4 prjnto print hobar por index 5 e null thakbe ba 0 thakbe and tar porer gulate garbage value thakbe
    printf("%c\n",a[5]); //ekhon null dekhabe ba 0 dekhabe jodi digit output dei...eita online compiler e bujha jabe
    
    return 0;
}