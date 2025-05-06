#include<stdio.h>
/* 1)Explain why we need long long int data type?
    -when we take int variable for int data it reserves 4 byte space in memory. 4 byte=32 bit.
     32 bit can contain 2^32 digits in binary which is around 10^9 in decimal. So after giving an 
     input of more than 9 digits in int variable if we print it then it will show garbage value. So
     for priting integers which are more than 9 digits we need to take long long int variable to input 
     data between 1-10^18 as long long int variable reserves or takes 8 byte=64 bit in memory which is
     2^64 in binary and 10^18 in decimals.

   2)Write all the rules for naming a variable in C programming.
   -i)variable name must start with letters or underscore.
    ii) it will contain only letters, digits and underscore.
    iii) no keywords which are used in C programming by default can't be used as variable name.Eg: int,float,etc 
   
    3)Write a C program that will take 2 numbers from the user and then print the 
   2nd number first and then first number.  
   - Answer is below.
*/
int main()
{ 
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n%d",b,a);
    return 0;
}