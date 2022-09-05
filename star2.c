#include<stdio.h>
int main()
{
 for(int i=8;i>=1;i--)
 {
  for(int k=7;k>=i;k--)
  { 
   printf(" ");
  } 
   for(int j=1;j<=i;j++)
   {
    printf("*");
    }
 printf("\n");
  } 
return 0;
}
