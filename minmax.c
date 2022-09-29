#include<stdio.h>
#include<stdlib.h>
    void minmax(int array[],int length, int *min, int *max);
    int main()
{
       int l,max,min;
       printf("Enter the length of the integer array :\n");
       scanf("%d",&l);
       int a[l];
       printf("Enter the values of the integer array at indexes\n");
       for(int i=0;i<l;i++)
      {
       scanf("%d  ",&a[i]);
     }
      min=a[0],max=a[0];
      minmax(a,l,&min,&max);
      printf("\nThe minimum value of the array is %d.\n",min);
     printf("The maximum value of the array is %d.\n",max);
     return 0;
}
     void minmax(int array[],int length, int *min,int *max)
{
       for(int i = 0;i<length;i++)
      {
       if(*max<array[i])
           *max=array[i];
       if(*min>array[i])
           *min=array[i];
       }
} 
 