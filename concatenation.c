#include <stdio.h>

 int main ()
{
char a[100],b[100];
 printf("Enter the  first string  to be concatenate.\n");
 //Inputting first string.
  gets(a);
 printf("Enter the second string to be comcatenate with first one.\n");
 //Inutting second string.
  gets(b);
  char *ac=a,*bc=b;
  while(*ac)
  {
     ac++;
   }
   while(*bc)
   {
      //concatenating the strings.
     *ac=*bc;
       ac++;
       bc++;
   } 
    //string must end with null character.
    *ac='\0';
    
     printf("The string after concatenation is :  %s \n",a);
     

       return 0;
  }
        
    
    