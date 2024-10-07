#include <stdio.h>
#include<math.h>
int main()
{
    int e;
    scanf("%d",&e);
    float vol;
    vol=(15+7*sqrt(5))/4*pow(e,3);
    printf("Volume of Dodecahedron:%f",vol);

    return 0;
}
