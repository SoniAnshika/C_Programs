#include<stdio.h>
int binary(int n)
{
if(n==0)
return 0;
else
return (n%2 + 10*binary(n/2));
}
int main()
{
int d,s; 
printf("Enter the value of the number to be converted into binary into equivalent.\n");
scanf("%d",&d);
s=binary(d);
printf("The binary equivalent of the number %d is %d.\n",d,s);
return 0;
}
  

