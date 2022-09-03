#include<stdio.h>
int main()
{
char ch;
printf("enter your favourite character\n");
scanf("%c",&ch);
if(ch>=65 && ch<=90)
printf("the ASCII value of '%c' character is %d(capital)",ch,ch);
else if(ch>=97 &&ch<=122)
printf("the ASCII value of '%c' character is %d(small)",ch,ch);
else if(ch>=48 && ch<=57)
printf("the ASCII value of '%c' character is  %d(digit)",ch,ch);
else
printf("the ASCII value of '%c' character is %d(special symbol)",ch,ch);
return 0;
}