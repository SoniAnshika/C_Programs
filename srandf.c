#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
  int m,n,RN;
  time_t t;
  printf("Enter the range of the numbers between which the random number has to be generated.\n");  
  scanf("%d",&m);
  scanf("%d",&n);
   srand( time(NULL));
   RN=(rand()%(n-m+1)+m);
  printf("Random number between %d and %d is :%d\n",m,n,RN);
  return 0;
}


  
  
  