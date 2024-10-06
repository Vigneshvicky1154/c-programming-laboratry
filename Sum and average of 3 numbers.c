#include <stdio.h>

int main()
{
    int n1,n2,n3;
    printf("Enter three integers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    int sum;
    sum=n1+n2+n3;
    printf("sum is %d ",sum);
    float avg;
    avg=(sum/3.0);
    printf("\naverage is %.2f",avg);
    
    
    return 0;
}
