#include<stdio.h>
int main()
{
double n;
printf("enter the number \n");
scanf("%lf",&n);double i=1.0,fact=1.0;
begin:
if(i<=n){
fact=fact*i;i++;goto begin;}
printf("the factorial of the number %lf is %lf ",n,fact);
return 0;
}