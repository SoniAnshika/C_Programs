#include<stdio.h>
int main ()
{
int a,b,c;
printf("enter the ages of brothers ram, ravi and rohan");
scanf("%d %d %d",&a,&b,&c);
if((a<b)&&(a<c))
printf("RAM IS THE YOUNGEST AMONG HIS BROTHERS");
else if((b<a)&&(b<c))
printf("RAVI IS YOUNGEST AMONG HIS BROTHERS");
else
printf("ROHAN IS YOUNGEST AMONG HIS BROTHERS");
return 0;
}