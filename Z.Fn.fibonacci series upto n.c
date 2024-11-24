#include<stdio.h>
int fibonacci(int x)
{
   int n1=0,n2=1,n3,i=0;
   while (i<=x)
   {
   printf("%d ",n1);
   n3=n1+n2;
   n1=n2;
   n2=n3;
   i++;
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    int f=fibonacci(n);
    return 0;
}
