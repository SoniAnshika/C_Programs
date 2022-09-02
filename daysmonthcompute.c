#include<stdio.h>
int main()
{
int days;
int month,d;
printf("enter number of days");
scanf("%d",&days);
month=days/30;
d=days-month*30;
printf("there are %d days and %d months in %d days",d,month,days);
return 0;
}