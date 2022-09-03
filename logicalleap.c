#include<stdio.h>
int main()
{
int year;
printf("enter the year");
scanf("%d",&year);
(((year%100==0)&&(year%400==0))||(year%4==0))?printf("LEAP YEAR"):printf("NOT A  LEAP YEAR");
return 0;
}