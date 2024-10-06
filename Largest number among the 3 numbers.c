#include <stdio.h>

int main()
{
   int n1,n2,n3;
   printf("enter the three numbers");
   scanf("%d%d%d",&n1,&n2,&n3);
   if(n1>n2 && n1>n3)
   {
       printf("largest num is %d",n1);
   }
   else if(n2>n1 && n2>n3)
   {
       printf("largest num is %d",n2);
      
   }
    else if(n3>n1 && n3>n2)
    {
        printf("largest num is %d",n3);
        
    }
     else
      {
          printf(" invalid ");
      }
      
      return 0;
}
