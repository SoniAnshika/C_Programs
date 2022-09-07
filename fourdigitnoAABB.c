#include <stdio.h>

int main()
 {
      int n,num,a,b, c, d , flag=0;
      /* inputing the four digit number in the form AABB .*/
      printf("Enter a four - digit number in form AABB. \n");
      scanf("%d",&n);num=n;
      if((n>=1000)&&(n<=9999))
      {
        a=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        d=n%10;
        if((a==b)&&(c==d))
        {
          for(int i=0;i<num;i++)
           {
              if(num==(i*i))
               {
                  flag=1;
                   break;
                }
           }
         if(flag==1)
         printf(" %d  is a four - digit perfect square number .\n",num);
        else
           printf(" %d  is a not a four - digit perfect square number .\n",num);
         }
       else 
       {
         printf(" %d  is a not in form AABB .\n",num);
        }
     }
     else 
     {
        printf(" %d number is not a four-digit number .\n",num);
     }
    
  return 0;

}