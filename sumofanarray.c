#include <stdio.h>
int main()
{
int n; 
printf("Enter the size of an array.\n");
scanf("%d",&n);
int ar[n];
int i,j,sum=0;
for(i=0;i<n;i++)
{
printf("Enter the elements of an array.\n");
scanf("%d",&ar[i]);}
for(j=0;j<n;j++)
{
sum=sum+ar[j];
}
printf("The sum of all the elements an array is %d.",sum);
return 0;
}