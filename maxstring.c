#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char s[100];
printf("enter the sentence :\n");
gets(s);
int maxlen=0,len=0;
int i=0,st=0,maxst=0;
while(1)
{
if((s[i]==' ')||(s[i]=='\0'))
{
if(len>maxlen){


maxlen=len;maxst=st;}
len=0;st=i+1;
}
else
{
len++;
}
if(s[i]=='\0')
break;
i++;
}
printf("The length of the maximum word in the sentence is %d.\n",maxlen);
printf("THe largest word in the sentence is :\n");
for(int j=0;j<maxlen;j++)
{
printf("%c",s[j+maxst]);
}
return 0;
}

