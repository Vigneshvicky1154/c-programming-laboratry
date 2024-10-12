#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int count=0,sum=0,rem;
    while(num!=0)
    {
     rem=num%10;
     count++;
     sum=sum+rem;
     num=num/10;
    }
     printf("count of digits is %d\n",count);
     printf("sum of digits is %d",sum);
    
    return 0;
}
