#include <stdio.h>
int main ()
{ 
 for(int i=71;i>=65;i--)
 {
  for(int j=65;j<=i;j++)
   {
    printf("%c ",j);
   }
    for(int l=70;l>=i;l--)
    {
     printf("  ");
    }
    for(int f=69;f>=i;f--)
    {
      printf("  ");
    }
   for(int k=i;k>=65;k--)
    {
     if(k==71)
     continue;
     printf("%c ",k);
    }
   printf("\n");
 }
 return 0;
}
     
   