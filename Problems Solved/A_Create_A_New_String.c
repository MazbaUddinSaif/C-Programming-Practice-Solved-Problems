#include<stdio.h>
int main()
{
    char a[1001],b[1001];
    scanf("%s\n%s",&a,&b);
    printf("%d %d\n",strlen(a),strlen(b));
    printf("%s %s\n",a,b);
    return 0;
}