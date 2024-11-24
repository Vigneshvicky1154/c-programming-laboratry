#include <stdio.h>

int main() 
{
    char binaryString[100];
    int decimal = 0;
    int i = 0;
    scanf("%s", binaryString);
    while (binaryString[i] != '\0')
    {
        decimal = decimal * 2;
        if (binaryString[i] == '1') 
        {
            decimal += 1;
        }
        i++;
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
