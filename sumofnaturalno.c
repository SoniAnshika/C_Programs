#include<stdio.h>
int main()
{
int n;
printf("enter the number of terms");
scanf("%d",&n);
float s=0.0f;
s=(n*(n+1))/2.0;
printf("the sum of %d terms is %f:",n,s);
return 0;
}