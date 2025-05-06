#include<stdio.h>
int main()
{   
 
    for(int i=1 ; i<=10 ; i+=1 )  //for(start/initializaion ; end condition ; increment/decrement)
                                //increment decrement e 1 er jnno : i=i+1 / i+=1 /i++ , i=i-1 / i-=1 / i--
                                //increment decrement e jekono num er jnno : i=i+4 / i+=4 , i=i-4 / i-=4
    {
        printf("%d Mazba is good\n",i);
    }

    //OR
    // int i=1;      
    // for(i ; i<101 ;i++)  ////initialization e just kon variable ta k niye increment/decrement korbo seta likhte hy...ekhetre garbage value skip korar jnno variable er value tao like dite hy hok seta for loop e othoba alada kore
    // {
    //     printf("Mazba is good\n");
    // }

    
    int i=0,j=0;
    for (j=1; j < 10; j++)
    {
        i++;
    }
    printf("%d\n",j);

    // for(int k=0;k<=10;k++)
    // {
    // int x = 4;
    // }
    // printf("%d",k);
    
    return 0;

}

/*

FOR LOOP STRUCTURE:

for(start/initializaion ; end condition ; increment/decrement)
{
    //code
}

*/