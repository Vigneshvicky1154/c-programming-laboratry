#include <stdio.h>
#include<math.h>
int main()
{
    int a,r,N;
    scanf("%d%d%d",&a,&r,&N);
    printf("a=%d,r=%d,N=%d\n",a,r,N);
    int g;
    g=a*pow(r,(N-1));
    printf("The %dth term of series is:%d",N,g);
    return 0;
}
