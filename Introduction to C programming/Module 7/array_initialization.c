#include<stdio.h>
int main()
{
    int x; //declare
    int y=10; //declare and initialize
    int a[5]; //declare
    int ar[5] ={1,84,2,54,9};  //declare and initialize
                                //evabe 2nd bracket er moddhe comma diye diye initialize kora jabe array er value
    int arr[6] ={24,1,84}; //erokom just 2 1 ta value initialize korle segula sequencially array er 1st 2nd 3rd index.. e joma hy and baki index e 0 joma hy automatic
                            //and jodi just declare kori then eikhetre garbage value dekhabe kintu jodi minimum ekta value initialize kori then r garbage value asbe na bakigula borong bakigula 0 dekhabe
    int arrr[6] ={0}; // evabe chaile sob value 0 rakhe jabe ekta value 0 initialize kore but
                        //but eta just  erokom 'fixed input array' er jnno possible
                        //'variable input array' er jnno possible na jemon : int n; scanf("%d",&n);  int arrry[n] ={0}; ekhetre error dekhabe
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",arrr[i]);
    }
    return 0;
}