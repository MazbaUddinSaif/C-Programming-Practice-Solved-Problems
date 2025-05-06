#include<stdio.h>
int main()
{
    int num1=10;  //integer variable takes 32 bit=4 byte
    num1=20;
    float f=4.568; //float variable takes 32 bit=4 byte
    char a='@';  //character variable takes 32 bit=4 byte
    char b='4';  
    printf("Hello \n saif \t kmon acho \n");
    printf("%d",num1);
    printf("%f \n",f); //by default decimal point er por 6 digit print kore
    printf("%.3f \n",f);  //decimal point er por kto digit print krbe seta control korar system
    printf("%c \n",a);

 //LIMITATIONS OF INTEGER AND FLOAT

     int num2=-2147483648; //1 bit mane 0 or 1...1 bit space nisi means ekhane 0 ba 1 total 2 vabe thakte parbe
                        // same vabe 2 bit er jnno 4 vabe thakte pare
                        // int er jnno 32 bit mane 2^32 vabe ba 2^32 sonkhok value rakha jabe
                        // etake 10 base e nile hy 2^32=4294967296 that means almost 10^9 sonkhok value rakha jabe
                        // ejonno 10^9 er beshi nite gele garbage value show kore
                        //tai long long int variable use krte hy jeta 8 byte space ney
                        // tar mane 2^64 ba pray 10^18 sonkhok value nite pare 
    printf("%d \n",num2);
    long long int num3=1234567890121;
    printf("%lld",num3); //ekhetre format specifier %lld

    float f1=1235146.12345546; //float er khetreo int er moto same case
                        // float o normally 4 byte space ney
                        //tai boro sonkhar jnno double variable use krte hy
    printf("\n %f",f1);
    double f2=1235146.12345546;
    printf("\n %lf",f2); // float er extended mane double variable er jnno format specifier %lf   return 0;

    unsigned int x=4294967295;
    printf("\n %u",x);
}

//RANGE OF VARIABLES
/*
BASIC:

1 bit = hy 0 othoba 1 ;
1 byte = 8 bit ;
1 bit poriman space ache mane ekhane hy 0 othoba 1 er ekta boshbe and
ei khetre combination hy 2 ta ;
same vabe 2 bit poriman space thakle combination hy 4 ta ;
n bit poriman  space thakle combination hy 2^n ta ;


INT:

Normally Int e 4 byte space ney that means 2^32 rokom combination hy ;
2^32 = 4,294,967,296 ;
So number line jodi hishab kori then int er range= -2,147,483,648 to +2,147,483,647;
ekhane +2,147,483,647 hoise cz 0 shoho count hoise tai ;
2^31=2,147,483,648 ;
SO INT RANGE in NUMBER LINE is= -(2^31) to   +(2^31)-1;
SO Basically digits hishab korle : 10^9 digit prjnto means 1 er por 9 ta 0 ;

LONG LONG INT:

Normally long long int e 8 byte space ney that means 2^64 rokom combination hy ;
SO LONG LONG INT RANGE in NUMBER LINE is= -(2^63) to +(2^63)-1;
SO Basically digits hishab korle : 10^18 digit prjnto means 1 er por 18 ta 0;


UNSIGNED INT:
INT er khetre basically 2^32 er moddhe 1 ta space sign er jnno thake;
so Unsigned int er jnno just (+)ve part of number line included thake and tai signed bit er jnno space lage na  tai 2^32 tai use hy  ;
SO UNSIGNED INT RANGE in NUMBER LINE is: 2^32= +4,294,967,295; (0 shoho included tai units e 6 na hoye 5 hoise)
etar format specifier: %u;

SIGNED INT:
eta r INT same;

*/