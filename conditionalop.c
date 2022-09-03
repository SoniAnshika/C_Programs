#include<stdio.h>

int main(void)
{
int a,b,c,f=0;
printf("enter the numbers\n");
scanf("%d %d %d",&a,&b,&c);
f=((a>b)&&(a>c))?a:((b>a)&&(b>c))?b:((c>a)&&(c>b))?c:0;
if(f==0)
  printf("ALL THE NUMBERS ARE EQUAL");
else
  printf("the greatest number is %d\n",f);
return 0;
}