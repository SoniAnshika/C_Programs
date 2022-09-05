#include<stdio.h>
 int main()
{
int k,i,j;
int sum=0,a[3][4],b[4][2],c[3][2];
printf("Enter the element of the matrix first:\n");
for(i=0;i<3;i++)
{
 for(j=0;j<4;j++)
  {
   scanf(" %d ",&a[i][j]);
  }
}
printf("Enter the element of the matrix second:\n");
 for(i=0;i<4;i++)
{
 for(j=0;j<2;j++)
  {
   scanf(" %d ",&b[i][j]);
  }
}
 for(i=0;i<3;i++)
  {
    sum=0;
   for(j=0;j<2;j++)
   {
     for(k=0;k<4;k++)
     {
       sum=sum + a[i][k]*b[k][j];     
      }
    c[i][j]=sum;
   }
  }
printf("The multiplication of the matrix is given below:\n");
for(i=0;i<3;i++)
{
 for(j=0;j<2;j++)
 
 {
   printf(" %5d ",c[i][j]);
  }
printf("\n");
}

return 0;
}
