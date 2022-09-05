#include<stdio.h>
int main()
{
int n;
printf(" Enter the length of the array:\n");
scanf("%d",&n);
int ar[n],g;
for(g=0;g<n;g++)
{
scanf("%d",&ar[g]);
}
int temp=0;
//sorting of an array
for(int j=0;j<n-1;j++)
{
 for(int k=j+1;k<n;k++)
 {
  if(ar[j]>ar[k])
  {
   temp=ar[j];
    ar[j]=ar[k];
    ar[k]=temp;
  }
 }
}
printf("Ascending order of the array is:\n");
for(int h=0;h<n;h++)
{ 
printf("%d\t",ar[h]);
}
return 0;
}