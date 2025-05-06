#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int size=strlen(b);
    for (int i = 0; i <=size; i++) //ekhane i<size dile Mazba jehetu 5 letter er tai Mohammad er first 5 letter Mazba diye replace hoye bakita bose jay...etar jnno i<=size dile Mazba er last er Null character o copy hobe tai Mohammad er last er extra part r theke jabe na
    {
        a[i]=b[i];
    }
    printf("%s %s",a,b);
    
    return 0;
}