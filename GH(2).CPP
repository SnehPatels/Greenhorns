#include<stdio.h>
#include<conio.h>
main()
{
 float base_salary,gs,hra,da,ta;
 clrscr();
 printf("Enter the base salary:");
 scanf("%f",&base_salary);
 hra=(base_salary * 10)/100;
 da=(base_salary * 5)/100;
 ta=(base_salary * 8)/100;
 gs=base_salary + hra + da + ta;
 printf("hra=%.2f\n",hra);
 printf("da=%.2f\n",da);
 printf("ta=%.2f\n",ta);
 printf("gross salary=%.2f\n",gs);
 getch();

}