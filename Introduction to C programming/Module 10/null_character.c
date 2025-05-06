#include<stdio.h>
int main()
{   
    char a[10];
    scanf("%s",&a); 
    printf("%s\n",a); 
    printf("%d\n",a[4]); //ekhon saif er jnno index 3 prjnto print er por index 4 e null ba '\0' save hoise memory te
    //tai ALWAYS JOTO LETTER ER STRING PRINT DITE CHAI
    //TAR CHEYE 1 BESHI ARRAY NIBO..NAHOLE COMPILER LAST LETTER ER POR 
    //NULL SAVE ER SPACE NA PEYE GARBAGE VALUE PRINT KORE DITE PARE!!!!
    return 0;


    //Another Concerning Matter: Mazba Uddin input niye print dile string just Mazba print krbe karon normally string er limitation holo eta space er ag prjnto print kore..tai eta thik korte solution is in string_input_with_spaces_.c file
}