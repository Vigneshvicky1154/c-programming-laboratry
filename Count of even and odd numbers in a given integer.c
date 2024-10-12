#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int digit,evencount=0,oddcount=0;
  while(n!=0)
  {
    digit=n%10;
    n=n/10;
    if(digit%2==0)
    {
      evencount++;
    }
    else if(digit%2!=0)
    {
        oddcount++;
    }
   }
    printf("count of even numbers:%d\n",evencount);
    printf("count of odd numbers:%d ",oddcount);
 
  return 0;
}
