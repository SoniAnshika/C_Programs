#include<stdio.h>
void get_int_n(int n);
int main()
{
int n;
printf("enter the number of terms\n");
scanf("%d",&n);
get_int_n(n);
return 0;
}
void get_int_n(int n)
{
int arr[n],sum=0;
for(int i=0;i<n;i++)
{
scanf("\n%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
sum=sum+arr[i];
}
printf("the sum of terms of the array is %d",sum);
}