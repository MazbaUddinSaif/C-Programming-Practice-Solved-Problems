#include <stdio.h>
char s[10000001];
int main()
{
    //main function er memory fixed which is not more than 10^6 
    //string size 10^6 prjnto neya jay main function er moddhe...
    //tai 10^6 er boro nile obosshoi main function er baire declare korte hbe string variable with size
    scanf("%s", &s);

    int fre[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        int val = s[i] - 'a'; // or int val=s[i]-97;
        fre[val]++;
    }

    for (int i = 0; i < 26; i++)
    {

        if (fre[i] > 0)
        {
            printf("%c : %d\n", i + 'a', fre[i]);
        }
    }

    return 0;
}