#include<stdio.h>
#include<stdlib.h>
int main()
{
  char *a,choice;
  int n,ni,i=0;
  printf("Enter the number of the student in the class. \n");
  scanf("%d",&n);
  n=20*n;
  char names[n];
  printf("Enter the work to be done from the given below list: enter character-\n(A) To insert a  student name.\n(B) To delete a name.\n(C) To print the names.\n(N) to stop the work.\n");
  scanf("%c",&choice);
  while(1)
  {
     switch(choice)
      {
        case 'A':
        printf("Enter the length of the name to be inserted :\n");
        scanf("%d",&ni);
        printf("Enter the name to be inserted\n");
        a = (char *)(malloc(ni*(sizeof(char))));
         if((a=(char *)malloc(ni*sizeof(char)))==NULL){
          printf("\nMemory cannot be allocated\n");}
        scanf("%[^\n]s",a);
        while(*a)
        {
           names[i]=*a;
           a++;i++;
        }
        names[i]=' ';
        break;
         
        case 'B': 
        printf("enter the length of the name to be deleted\n");
        scanf("%d",&ni);
         printf("enter the name to be deleted :\n");
          if((a = (char *)malloc(ni*sizeof(char)))==NULL){
          printf("\nMemory cannot be allocated\n");}
          else{
         scanf("%[^\n]",a);
         int j=0;
         while(1){
         if(names[j]==*a)
          {
            names[j]=' ';
            a++;
           }
            if(*a=='\0')
            break;
            j++;}}
           break;
          
          case'C':
           names[i]='\0';
           for(int k=0;names[k]!='\0';k++)
          {
            if(names[k]==' ')
            continue;
            printf("%c",names[k]);printf("\t");
          }
          break;

          case 'N':
          break;
         }
    if(choice=='N')
    break;
 }
 return 0;
}
    
        