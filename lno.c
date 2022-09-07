#include<stdio.h>

int main()
{
     int i,j;
     //Enter the integer and the number whose next largest multiple is to be found.
     printf("Input the numbers i and j.\n");
     scanf("%d %d",&i,&j);
     i++;
     while(1)
     {
       if(i%j==0)
        break;
        i++;
     }
     printf("The next largest multiple divisivle by %d results into : \n",j);
     printf("%d",i);

     return 0;
}
 