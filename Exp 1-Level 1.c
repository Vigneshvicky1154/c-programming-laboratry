#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two Numbers:");
    scanf("%d %d",&a,&b);
    int sum,diff,prd,quo,rem;
    sum=a+b;
    printf("%d+%d=%d\n",a,b,sum);
    diff=a-b;
    printf("%d-%d=%d\n",a,b,diff);
    prd=a*b;
    printf("%d*%d=%d\n",a,b,prd);
    quo=a/b;
    printf("%d/%d=%d\n",a,b,quo);
    rem=a%b;
    printf("%d%%%d=%d",a,b,rem);
    return 0;
}
