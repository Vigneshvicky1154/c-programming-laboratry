#include <stdio.h>

int main() 
{
    int nf,n1=0,n2=1,n3;
    scanf("%d", &nf);
    for (int i=1;i<=nf;i++)
    {
        printf("%d ",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    printf("\n");

    return 0;
}
