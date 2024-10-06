#include <stdio.h>

int main()
{
    float Celcius;
    printf("Celcius:");
    scanf("%f",&Celcius);
    float Fahrenheit;
    Fahrenheit=(9*Celcius/5+32);
    printf("Fahrenheit:%f",Fahrenheit);
    return 0;
}
