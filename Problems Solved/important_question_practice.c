#include<stdio.h>
//Given a number N. Find all the divisors of N and write it in different lines in descending order

// int main()
// {
//     int N;
//     scanf("%d",&N);
//     for(int i=N ; i>=1 ;i--)
//     {
//         if(N%i==0)
//         {
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

//Given two number X and Y.Print the sum of all odd numbers between them, excluding X and Y.in Input first line contains a number T(1<=T<=10) which is a number of test cases
//Next T lines will contain two numbers X and Y.
//(Test case means ora amake x and y er man ekbar input na diye oder icchamoto T ber dbe and amake T ber e dekhte hbe j program work krtese kina..so ejonno just 1 bar X and Y k niye program likhe otake ekta T ber er jnno loop e dhukai dile done)
/*
INPUT:
3
5 6
10 4
4 9
*/

// int main()
// {
//     int T;
//     scanf("%d",&T);

//     for(int tc=1 ; tc<=T ; tc++)
//     {

//     int X,Y,temp;
//     int sum=0;
//     scanf("%d %d",&X,&Y);
//     if(X>Y)
//     {
//         temp=Y;
//         Y=X;
//         X=temp;
//     }
    
//     for(int i=X+1;i<Y ;i++)
//     {
//         if(i%2==1)
//         {
//             sum=sum+i;
//         }
//     }
//     printf("%d\n",sum);

//     }
// }



//Given a number N. Print the factorial of N.in Input first line contains a number T which is actually test cases .
//Next T lines will contain number a number N(0<=N<=20)
/*
Input:
3
10
6
0
*/

int main()
{
    int T;
    scanf("%d",&T);
    for(int tc=1;tc<=T;tc++)
    {

        
    int N;
    scanf("%d",&N);
    long long int factorial=1; //factorial 20 er man 10^9 cross kore tai long long int lagbe factorial e
                               //int e 10^9; long int e 10^12 ; long long int e 10^18 prjnto range number er digits
    for(int i=1;i<=N;i++)
    {
        factorial=factorial*i;
    }
    printf("%lld\n",factorial);

    }
    return 0;
}