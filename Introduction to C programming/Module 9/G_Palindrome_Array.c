// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];

//     // taking input
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     // copying a to b
//     int b[n];
//     // b[n]=a[n];  //eta wrong karon ekhane only ekta index er element copy hocche bt pura array hocche na...loop diye krte hbe tai
//     for (int i = 0; i < n; i++)
//     {
//         b[i] = a[i];
//     }

//     // inversing b
//     for (int k = 0, j = n - 1; k < j; k++, j--)
//     {
//         int tmp = b[k];
//         b[k] = b[j];
//         b[j] = tmp;
//     }

//     // checking a=b or not
//     int palindrome = 1;
//     for (int z = 0; z < n; z++)
//     {
//         if (a[z] != b[z])
//         {
//             palindrome = 0;
//             break;
//         }
//     }

//     // printing pallindrome or not
//     if (palindrome == 1)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
     int n;
    scanf("%d", &n);
    int a[n];

    // taking input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int palindrome=1;
    for (int i = 0,j=n-1; i < j; i++,j--)
    {
        if (a[i]!=a[j])
        {
            palindrome=0;
            break;
        }
        
    }
    if (palindrome==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    
    
    return 0;
}