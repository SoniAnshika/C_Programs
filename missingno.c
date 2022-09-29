#include<stdio.h>
int main()
{
  int N;
  printf("Enter the number uptill where the numbers are in array.\n"); 
  scanf("%d",&N);//Inputting the number uptill where the array contains the number. 
  int A[N-1],i,j;
        printf("Enter the members of the array:\n");
       for( j=0;j<(N-1);j++)
      { 
        /*
       Entering the element one by one in the array sequentially.
      */
       scanf("%d",&A[j]);
       }
      for(i=1;i<=N;i++)
      {
        if(A[i-1]!=i)//checking which number is missing in the array.
        break;
       }
     //printing the number misssing in the array.
    printf("The missing number in an array is %d\n",i);
    return 0;
}
