#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int i,osum=0;
   for(i=1;i<=n;i+=2)
   {
       osum+=i;
   }
   printf("%d",osum);
  
    return 0;
}
