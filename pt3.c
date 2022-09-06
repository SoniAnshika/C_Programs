#include<stdio.h>
int main()
{
 for(int i=5;i>=1;i--)
  {
  for(int j=i;j<=5;j++)
     { 
       printf("* ");
     }
     for(int k=1;k<=((2*i)-2);k++)
    {
     printf("  ");
    }
    for(int l=i;l<=5;l++)
    { 
      printf("* "); 
     }
     printf("\n");
   }
 for(int i=1;i<=5;i++)
 { 
   for(int j=5;j>=i;j--)
    {
     printf("* ");
     } 
   for(int k=1;k<=((2*i)-2);k++)
   {
     printf("  ");
    }
   for(int l=5;l>=i;l--){
   printf("* ");}
   printf("\n");
  }
  return 0;
}

