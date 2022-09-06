#include<stdio.h>
int main()
{
for(int i=5;i>=1;i--)
{
 for(int j=5;j>=i;j--)
  printf("%d ",j);
  for(int k=1;k<=(2*(i-1)-1);k++)
  printf("%d ",i);
  for(int l=i;l<=5;l++)
  { 
    if(i==1 && l==1)
    continue;
    printf("%d ",l);
  } 
printf("\n");
}
for(int i=2;i<=5;i++)
{
 for(int j=5;j>=i;j--)
  printf("%d ",j);
   for(int k=1;k<=((2*i)-3);k++)
    printf("%d ",i);
    for(int l=i;l<=5;l++)
     printf("%d ",l);
printf("\n");
}
return 0;
}  