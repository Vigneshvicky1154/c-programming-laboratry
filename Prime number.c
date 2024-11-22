#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int i, factor=0;
   for(i=2;i<=n/2;i++)
   {
      if(n%i==0)
      {
        factor++;
        break;
      }
   }
      if(factor==1)
      {
          printf("%d is not a prime number ",n);
      }
      else
      {
         printf("%d is a prime number ",n);
      }
    return 0;
}
