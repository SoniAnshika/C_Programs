#include<stdio.h>
int main()
{
int y;
printf("enter the year");
scanf("%d",&y);
if((y%100)==0)
{
 if((y%400)==0)
{
printf("INPUT YEAR %d IS LEAP YEAR",y);
}
else
{
printf("INPUT YEAR %d IS NOT A LEAP YEAR",y);
}
}
else
{
if((y%4)==0)
{
printf("INPUT YEAR %d IS LEAP YEAR",y);
}
else
{
printf("INPUT YEAR  %d IS NOT A LEAP YEAR ",y);
}
}
return 0;
}