#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1]; // array te ekta extra input dbo tai extra index nilam...loop e normally condition e <n use kori tai n=5 hole okhane 4 prjnto count hy karon 0 o index er ekta part.....tai extra input er jnno n+1 likhi a[ekhane] jate n+1 hote 1 kom means n prjnto means index0 to n prjnto input ney
    for (int h = 0; h < n; h++)
    {
        scanf("%d", &a[h]);
    }
    int index, value;
    scanf("%d %d", &index, &value);
    for (int i = n ; i > index; i--) //i=n hobe cz n er value suppose 5 hole n-1 prjnto normally input thake and jehetu ekhon 1 ta input barbe tai n prjnto input asbe
    {
        a[i] = a[i - 1];
    }
    a[index] = value;
    for (int k = 0; k < n + 1; k++)
    {
        printf("%d ", a[k]);
    }

    return 0;
}