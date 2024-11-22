#include <stdio.h>
int main()
   {
    int n,m;
    scanf("%d%d",&n,&m);
    int v;
    for(int i=n;i<=m;i++) 
    {
       if(i%9==0)
       {
       printf("%d  ",i);
       }
       
    }
    return 0;
}
