#include<stdio.h>
int main()
{
for(int i=1;i<=4;i++)
{
 for(int k=4;k>=i;k--)
{
 printf(" ");
 }
 for(int j=1;j<=i;j++)
 {
  printf(" %d ",i);
 }
printf("\n");
}
for(int i=3;i>=1;i--)
{
 for(int k=3;k>=i;k--)
 {
  printf(" ");
  printf(" ");
 }
  for(int j=1;j<=i;j++)
  {
   printf(" %d ",i);
  }
printf("\n");
}  
return 0;
}