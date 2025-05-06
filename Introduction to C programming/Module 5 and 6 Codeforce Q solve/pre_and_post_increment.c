#include<stdio.h>
int main()
{

    //post increment
    int x=10;
    int y=x++;  //ekhetre age a er value age y te save hy and then 1 bare 11 hy
     
    printf("%d\n%d\n\n",x,y);
    
    //pre increment
    int a=10;
    int b=++a; //ekhetre age a er value 1 bare 11 hy and then b te save hy
    printf("%d\n%d",a,b); 
    
    return 0;
}