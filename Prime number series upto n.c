#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int i,j, factor=0;
   for(i=2;i<=n;i++)
   {
      factor=0;
      for(j=2;j<=i/2;j++)
      {
          if(i%j==0)
          {
           factor=1;
           break;
          }
      }
      if(factor==0)
      {
       printf("%d ",i);
      }
   }
    return 0;
}
