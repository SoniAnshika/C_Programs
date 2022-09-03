#include <stdio.h>
  
int main()
{
int i;float n,avg=0.0,sum=0.0; 
printf("Enter the numbers or marks of students : also enter -1 to exit the count\n");
scanf("%f",&n);
for(;n != -1;i++)
{
sum=sum+n;
printf("enter the marks and also remember for exit enter -1\n");
scanf("%f",&n);
}
avg=sum/i;
printf("the average of marks of the students is: %f\n",avg);
printf("the number of students who had entered the marks are: %d\n",i);
return 0;
} 