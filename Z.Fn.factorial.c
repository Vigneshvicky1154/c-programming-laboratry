#include<stdio.h>
int factorial(int x)
{
   int f=1;
   for(int i=1;i<=x;i++)
   {
       f=f*i;
   }
   return f;
}
int main()
{
    int n;
    scanf("%d",&n);
    int f=factorial(n);
    printf("%d",f);
    return 0;
}
