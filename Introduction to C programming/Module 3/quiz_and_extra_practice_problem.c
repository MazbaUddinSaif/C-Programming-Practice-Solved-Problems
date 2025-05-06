#include<stdio.h>
//What will be the output of the following code?
// int main()
// {
//     int i=0,j=0;
//     for(j=1;j<=5;j++)
//     {
//         i++;
//     }
//     printf("%d",j);
// }

//    A) 1
//    B) 0
//    C) 5
//    D) 6
// Explanation: 
// লুপের শর্ত j=1 থেকে j<=5 পর্যন্ত চলবে (প্রতি স্টেপে 1 করে বৃদ্ধি হবে)।
// লুপটি j=5 পর্যন্ত চলার পর j++ হওয়ায় j-এর মান ৬ হয় (কারণ j=6 হলে
// শর্ত j<=5 মিথ্যা হয়, তাই লুপ বন্ধ হয়)। তাই, কোডের শেষ লাইন
// printf("%d", j) → 6 প্রিন্ট করবে

//Write a c program to print 8’s time table to 200

// int main()
// {
//     for (int i = 8; i <=200; i+=8)
//     {
//         printf("%d ",i);
//     }
    
//     return 0;
// }

// In this problem you will be given an integer number N. Print "Zero" if the number is equals to 0 and "Non Zero" Otherwise.

// int main()
// {
//     int N;
//     scanf("%d",&N);
//     if(N==0)
//     {
//         printf("Zero");
//     }
//     else
//     {
//         printf("Non Zero");
//     }
//     return 0;
// }

//In this problem you will be given an integer number N. You will have to add 5 with N and print it.

// int main()
// {
//     int N;
//     scanf("%d",&N);
//     printf("%d",N+5);
    
//     return 0;
// }
