#include <stdio.h>
int main()
   {
    int n,m;
    scanf("%d%d",&n,&m);
    int c=0,sum=0;
    for(int i=n;i<=m;i++) 
    {
       if(i%9==0)
       {
       printf("%d  ",i);
       c++;
       sum=sum+i;
       }
       
    }
    printf("\n");
    printf("No.of.integers %d\n",c);
    printf("%d",sum);
    return 0;
}
