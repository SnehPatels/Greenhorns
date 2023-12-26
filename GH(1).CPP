#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 float F=0,C;
 printf("Enter the value of celcius:");
 scanf("%f",&C);
 F=(C * 9/5) + 32;
 printf("Celcius to Fahreheit is :%.2f",F);
 getch();


}