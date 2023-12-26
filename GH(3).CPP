#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int a,b,c;
 printf("Enter the first angle of triangle:");
 scanf("%d",&a);
 printf("Enter the second angle of triangle:");
 scanf("%d",&b);
 c=180 - (a+b);
 printf("Third angle of triangle = %d",c);
 getch();

}