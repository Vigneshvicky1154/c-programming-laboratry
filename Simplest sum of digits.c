#include <stdio.h>

int main()
{
   int num;
   scanf("%d",&num);
   int sum=0;
   while(1)
   {
   while(num!=0)
   {
       sum=sum+(num%10);
       num=num/10;
   }
   if(sum<=9)
   {
       break;
   }
   else
  {
      sum=(sum%10)+(sum/10);
  }
   }
   printf("%d",sum);

    return 0;
}
