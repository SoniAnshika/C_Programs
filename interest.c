#include<stdio.h>
int main()
{
double p,r,t,i;
printf("enter the value of p,r,t");
scanf("%lf %lf %lf",&p,&r,&t);
i=(p*r*t)/100.0;
printf("the interest to be paid by brrower is %lf",i);
return 0;
}