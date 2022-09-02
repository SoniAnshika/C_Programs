#include<stdio.h>
int main()
{
int n;
float s=0.0f;
printf("enter number of terms");
scanf("%d",&n);
s=(n*(n+1)*(2*n+1))/6;
printf("sum of squares of %d natural numbers is:%f",n,s);
return 0;
}