#include <stdio.h>
int main()
{
int n;
printf("Enter the size of an array.\n");
scanf("%d",&n);
int a[n],sum=0;
printf("Enter the elements of an array.\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<(n-1);i++)
{
sum=sum+a[i];
}
printf(" The sum of the (n-1) terms of an array is %d.\n",sum);
printf("The entered array before changing the value of the nth term of an array is:\n");
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
a[(n-1)]=sum;
printf("\nArray after changing the value is:\n"); 
for(int j=0;j<n;j++)
{
printf("%d ",a[j]);
}
return 0;
}



