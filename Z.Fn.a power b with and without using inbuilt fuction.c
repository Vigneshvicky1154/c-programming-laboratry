#include<stdio.h>
#include<math.h>
int without(int x,int y)
{
    int i,f1=1;
    for(i=1;i<=y;i++)
    {
        f1=f1*x;
    }
    return f1;
}
int with(int x,int y)
{
    int i,f2=1;
    for(i=1;i<=y;i++)
    {
        f2=pow(x,y);
    }
    return f2;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int f1=without(a,b);
    printf("%d\n",f1);
    int f2=with(a,b);
    printf("%d",f2);
  return 0;
}
