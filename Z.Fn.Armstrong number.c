#include<stdio.h>
#include<math.h>
    int armstrongnumber(int num)
    {
    int digits=0,temp=num;
    while(temp!=0)
    {
        digits++;
        temp=temp/10;
    }
    int t=num,r=0,digit;
    while (t!=0)
    {
        digit=t%10;
        r=r+pow(digit,digits);
        t=t/10;
    }
    return r;
    }
    int main()
    {
        int num;
        scanf("%d",&num);
        int r=armstrongnumber(num);
    if(r==num)
    {
    printf("%d is a Armstrong number",num);
    }
    else
   {
    printf("%d is not a Armstrong number ",num);
   }
    return 0;
}
