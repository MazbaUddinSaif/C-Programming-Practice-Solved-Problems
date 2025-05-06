#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000001];
    scanf("%s",&a);
    int length= strlen(a);
    int sum=0;
    for (int i = 0; i<length ; i++)
    {
        //jehetu 351 character hishebe ache tai egula sum krle egular ascii value sum hoye 153 hocche
        //tai age 351 character k integer e nite hbe it means ascii theke int e nite hbe..int 0 er ascii value 48...tai muloto sob char theke 48 bad dilei int pabo        
        a[i]=a[i]-48;
        sum=sum+a[i];
        //othoba sum+=a[i]-48; just eita likhleo hobe
    }
    printf("%d",sum);
    return 0;
}