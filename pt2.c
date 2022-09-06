#include<stdio.h>
int main()
{
for(int i=1;i<=5;i++)
 {
  for(int j=1;j<=i;j++)
  {
   if(j==1)
    printf("%d ",j);
   else if(i==j)
    printf("%d ",j);
   else if(i==5)
    printf("%d ",j);
   else
    printf("  ");
  }
  printf("\n");
 }
return 0;
}