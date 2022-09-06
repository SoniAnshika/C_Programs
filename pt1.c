#include<stdio.h>
int main()
{
for(int i=1;i<=7;i++)
{
 for(int j=1;j<=7;j++)
 {
   if(i==j)
   {
     if(i<=4)
     printf("%d ",j);
     else 
     printf("%d ",7-i+1);
   }
   else if((i+j)==8)
     {
      if(i>j)
      printf("%d ",j);
      else if(i<j)
      printf("%d ",i);
     }
    else{
     printf("  ");
   }
  }
  printf("\n");
 }  
}