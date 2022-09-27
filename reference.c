#include<stdio.h>
void fun(int *ptr);
int main()
{
 int y=20;
 fun(&y);
 printf("%d\n",y);
return 0;
}
void fun(int *ptr)
{
  *ptr=30;
    /* in this question we are using the call by reference concept to change the value of the variables .
     when ever there is a program where we have to return two or more variables from the function .
    Then we have to use this concept namedd as the call by reference concept where whenever there is the change in the 
    value of the pointr type of that variable then that change reflect back to the value of the variable too. */ 
}

  