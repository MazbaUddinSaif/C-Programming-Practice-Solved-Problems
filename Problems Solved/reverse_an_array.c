#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int tmp;
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

        i++;
        j--;
    }
    /* OTHOBA

    for(int i=0,j=n-1 ; i<j ; i++,j--)
    {

        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

    }

    */

    /* OTHOBA

    for (int i = 0; i <=((n-1)/2); i++)
    {
        int tmp;
        tmp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=tmp;
    }

    */

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
