#include<stdio.h>
int fibonacci(int x)
{
   int n1=0,n2=1,n3,i=0;
   int arr[x];
   while (i<=x)
   {
   arr[i]=n1;
   n3=n1+n2;
   n1=n2;
   n2=n3;
   i++;
   }
   for(i=x;i>=0;i--)
   {
       printf("%d ",arr[i]);
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    int f=fibonacci(n);
    return 0;
}
