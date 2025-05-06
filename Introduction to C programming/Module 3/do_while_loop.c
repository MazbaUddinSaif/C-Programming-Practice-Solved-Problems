#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);
//FOR LOOP & WHILE LOOP e condition ta age check kore compiler e then loop er vitorer kaj gula hy
//ekhetre FOR LOOP e increment/decrement obossoi loop kaj korar por hy and DO While er khetre loop er moddher kajer por increment/decrement command likhle same FOR LOOP er moto age loop er command kaj kore then increment/decrement hy and chaile jodi loop er vitorer command er age increment/decrement command dei tahole loop er vitorer kaj hobar agei increment/decrement hobe
//SO FINALLY FOR LOOP & WHILE LOOP e default obstay likhle 1st e condition chk 2nd e loop er moddher command 3rd e increment/decrement then repeat hy but WHILE e chaile increment/decrement ta loop er moddhokar command er ageo korano jay jodi increment/decrement command ta loop er moddhar kajer shurute likhi
//But DO WHILE LOOP e age ekbar loop er vitorer kaj gula hy then condition chk hy...tai DO WHILE LOOP e condition false hoileo seta ekbar chole
    int j = 100;
    do
    {
        printf("%d\n", j);
        j++;
    } while (j <= 10); //condition false hobar poreo ekbar print hoise

    for(int k=100; k<=10;k++)
    {
        printf("%d\n", k); //bt ekhane print hobe na kisui..same for WHILE LOOP
    }

    return 0;
}
/*

DO WHILE LOOP STRUCTURE:

initializaion;
{
    //code
 increment/decrement;
}while( end condition);

*/