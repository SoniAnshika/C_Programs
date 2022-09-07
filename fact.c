#include<stdio.h>
 long  int fact(int n)
   {  // int f=1;
    /* for(int i=1;i<=n;i++)
        f=f*i;*/
       if(n==0)
       return 1;
       else
       return (n*fact(n-1));
    }
int main()
{
     int n ;long int f; 
     printf("Enter the number whose factorial has to be found.\n");
     scanf("%d",&n);
     /*for(int i=1;i<=n;i++)
        f=f*i; */
       f=fact(n);
      printf("The factorial of the given number %d is %ld. \n",n,f);
       
     return 0;
}
