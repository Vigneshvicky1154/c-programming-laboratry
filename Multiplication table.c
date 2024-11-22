#include <stdio.h>

int main()
{
    int a,n;
    scanf("%d%d",&a,&n);
    int i,prd;
    for(i=1;i<=n;i++)
    {
        prd=a*i;
        printf("%d*%d=%d\n",a,i,prd);
    }
    return 0;
}
