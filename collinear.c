#include<stdio.h>
int main()
{
int x1,y1,x2,y2,x3,y3;float m1,m2;
printf("enter the coordinates of a(x1,y1),b(x2,y2),c(x3,y3)\n");
scanf("%d%d%d%d%d%d ",&x1,&y1,&x2,&y2,&x3,&y3);
m1=(y1-y2)/(x1-x2)*(1.0);
m2=(y1-y3)/(x1-x3)*(1.0);
if(m1==m2)
printf("THE POINTS ARE COLLINEAR");
else
printf("THE POINTS ARE NOT COLLINEAR");
return 0;
}