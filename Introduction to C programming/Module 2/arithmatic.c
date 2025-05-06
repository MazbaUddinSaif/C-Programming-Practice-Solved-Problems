#include <stdio.h>
int main()
{
    int a = 5;
    float b = 2;
    int c = 3;
    int sum = a + b;
    printf("summation = %d\n", sum);
    int sub = a - b;
    printf("subtraction = %d\n", sub);
    int mul = a * b;
    printf("multiplication = %d\n", mul);
    float div = a / b;
    printf("division = %f\n", div); // division er khetre jodi sob input int e nei and
                                    // print e variable o int e nei taile quotient e
                                    // decimal point er por er kichu show krbe na
                                    //  ejonno at least ekta variable float nite hbe and
                                    //  print er somoy float variable use krte hbe
                                    // tahole quotient e decimal point er porer sobkichu asbe
    int rem = a % c;
    printf("Remainder = %d\n", rem);

//LOOK AT THIS TYPES

    double x = 15, y = 4;
    double divs = x / y;
    printf("%lf\n", divs); //2 ta double variable x,y er value alada vabe nisi then arekta double variable niye sekhane div krsi tai . er por sob asche

    float j = 15, k = 4;
    float diva = j / k;
    printf("%f\n", diva); //2 ta float variable j,k er value aladavabe nisi then arekta float variable niye sekhane div krsi tai . er por sob asche

    int l = 15, m = 4;
    int dive = l / m;
    printf("%d\n", dive); //2 ta int variable l,m er value aladavabe nisi then arekta int variable tai div krle . er porer gula ase na cz eta int
                        //long long int er khetreo same
  //it means ami specific j line e j variable type use krbo compiler thik sei var type tai nibe
    double divas = 15/4 ;
    printf("%lf\n", divas);     
    //example hishebe uporer code e double type variable nebar poreo ans kintu 3.000000 asche 9th line e output e
    //karon ekhane double er moddhe amra alada alada vabe 2 ta variable niye value boshaye then abr new arekta double variable niye sekhane div kori nai
    //ekhane amra direct ekta double var niye okhanei 15/4 likhsi
    //jehetu shudhu 15/4 e 15 and 4 duitai integer tai etar value tao int mane 3
    //tar mane 15/4 likhsi means muloto double variable e 3.000000 store hoise.tai ans o 3.000000 dekhacche
    //ekhetre jodi amra float/double var e div ekebare kori taile at least ekta number k 15.0 ba 4.0 evabe likhte hbe
    double divis=15.0/4;
    printf("%lf\n",divis); //ekhon 3.750000 print hoise thik e
    //etokkhon muloto 15/4 likhate compiler etar output 3 paise and jehetu double var nisi tai se simply etake 3.000000 kore nise
    //and output eo 3.000000 show krtesilo
    //lets see another example
    float divisi=15/4;
    printf("%f\n",divisi); //ekhetre float e ekebare ektatei div korte giye 15/4 disi tai 15/4=3 value float e 3.000000 akare save hoise and boom
    float divisin=15.0/4.0;
    printf("%f\n",divisin); //ekhon abr 3.750000 hobe
    int division=15.0/4.0;
    printf("%d",division); //ekhon 15.0/4.0=3.75 value theke int var neoyate variable e only 3 store hoise and boom

    return 0;
}
