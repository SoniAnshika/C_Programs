
#include<stdio.h>

int main(void)
{
int a=4,b=5; 
printf("%d,%d,%d,%d,%d",a++,++a,a,++a,a++);
printf("\n");
printf("%d,%d,%d,%d",a,++a,a++,++a);
printf("\n");
printf("%d,%d,%d",++a,a++,a);
printf("\n");
printf("THE INCREMENT OPERATION IS DONE UPTILL NOW \n");
printf("%d,%d",a%b,a/b);
int p=-3,q=-5;
printf("\n");
printf("%d,%d",p%q,p/q);
q=5;
printf("\n");
printf("%d,%d",p%q,p/q);
printf("\n");
p=3;
printf("%d,%d",p%q,p/q);
printf("\n");
printf("complement:%d \n",~p);
printf("HAVE A NICE DAY......THANK YOU FOR YOUR PARTICIPATION \n");
}