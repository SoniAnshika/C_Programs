#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char s[100];
printf("Enter the string of your choice\n");
gets(s);int i=0;
while(s[i] != '\0')
{
if(s[i]== ' ')
printf("\n");
else
printf("%c",s[i]);
i++;
}
return 0;
}