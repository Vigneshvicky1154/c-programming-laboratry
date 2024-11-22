#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int i,esum=0;
   for(i=2;i<=n;i+=2)
   {
       esum+=i;
   }
   printf("%d",esum);
  
    return 0;
}
