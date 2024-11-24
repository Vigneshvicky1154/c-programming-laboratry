#include <stdio.h>
int prime(int x)
{
    int factor=0;
    if(x<=1)
    {
       factor=1;
    }
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            factor++;
            break;
        }
    }
    return factor;
}
int main()
{
	int n;
	scanf("%d",&n);
	int prime(int n);
	int factor=prime(n);
	if(factor==0)
    {
        printf("prime number");
    }
    else
    {
        printf("Not a prime number");
    }
    return 0;
}

