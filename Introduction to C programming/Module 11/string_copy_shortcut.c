#include<stdio.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);
   
    strcpy(a,b); //strcpy( jekhane copy kore rakhbo, jeta copy krbo);

    printf("%s %s",a,b);
    return 0;
}