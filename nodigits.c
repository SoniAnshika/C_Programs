#include<stdio.h>

int main()
{
     int n,num,d,c=0;
     /* Enter the number.  */ 
     printf("Input the number of digits 1,2 ,3 ,4 or 5.\n");
     scanf("%d",&n);
      num=n;
     /* computing the number of digits in the number .*/
     while(n>0)
      {
       d=n%10;
        c++;
        n=n/10;
       }
      printf("The number of digits in the given number  %d   is :\n",num);
      printf("%d",c);
      
      return 0;
}