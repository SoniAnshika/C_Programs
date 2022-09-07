#include<stdio.h> 
   int mystrlen(char st[])
   {
     int i=0;
     while(st[i]!='\0')
      {
      i++;
      }
      return i;
  }
  int main()
{
  char st[100];
     printf("Enter the string of your choice to find the length of the string .\n");
     //using gets funtion inputing the string with spaces or without spaces.
      gets(st);
      //storing the length of the entered  string in the variable l  from the  user defined function mystrlen. 
      int  l=mystrlen(st);
       printf("The length of the string entered as per your choice is %d. ",l);

   return 0;
}
