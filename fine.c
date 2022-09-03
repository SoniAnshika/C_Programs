#include<stdio.h>
int main()
{
int n;
printf("enter the number of days\n");
scanf("%d",&n);
double f=0.0;
if(n>=1 && n<=5)
f=n*0.50;
else if(n>=6 && n<=10)
f=n*1;
else if(n>=11 && n<=30)
f=n*5;
else 
printf("LICENSE OF THE LIBRARY CANCELLED\n");
if(f!=0.0)
printf("the fine of %d days is %lf\n",n,f);
return 0;
}