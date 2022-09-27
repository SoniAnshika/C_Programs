#include<stdio.h>
#include<time.h>
#include<stdlib.h>
struct Engineparts
{
   char serialno[4];
   char materialType[20]; 
   int Year;
   int qty;

};
int main()
{
      struct  Engineparts  a[60];
    srand(time(NULL));
    for(int i = 0;i<60;i++)
    {
        a[i].Year=(rand()%(2018-1990+1)+1990);
        a[i].qty=(rand()%1000+1);
     } 
     for(int j=11;j<=26;j++)
        {
         printf("Serial number of the engine part is:%s\n",a[j].serialno);
         printf("Year of manufacturing of the engine part is: %d\n",a[j].Year);
         printf("Material Type of the engine type is: %s\n",a[j].materialType);
         printf("Quantity of that engine part  manufactured is: %d\n",a[j].qty);
        printf("\n");
       }
return 0;
}
         
        