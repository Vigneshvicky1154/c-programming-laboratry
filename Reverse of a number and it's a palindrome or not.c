#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int rem,r=0;
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        r=r*10+rem;
        n=n/10;
    }
    printf("%d\n",r);
    if(r==temp)
    {
        printf("it's a palindromic number ");
        
    }

    return 0;
}
