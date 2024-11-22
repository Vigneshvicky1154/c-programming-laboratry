#include <stdio.h>
int main()
   {
    int a,b;
    scanf("%d %d",&a,&b);
    int f=1;
    for(int i=1;i<=b;i++) 
    {
        f=f*a;
    }
    printf("%d",f);
    return 0;
}
