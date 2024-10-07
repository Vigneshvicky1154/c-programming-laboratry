#include <stdio.h>
#include<math.h>
int main()
{
    float side, area;
    scanf("%f",&side);
    area=M_PI*pow((side/2),2);
    printf("%.2f",area);

    return 0;
}
