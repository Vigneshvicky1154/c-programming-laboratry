#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    float oct;
    oct=3*(pow(n,2))-(2*n);
    printf("octogonal number:%.2f",oct);
    return 0;
}
