
#include<stdio.h>
int main() 
{
    char marital_status, gender;
    int age;

    printf("Enter marital status (M/U): ");
    scanf(" %c", &marital_status);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter age: ");
    scanf("%d", &age);

    if (marital_status == 'M') 
    {
        printf("The driver is insured.\n");
    } 
    else if (marital_status == 'U') 
    {
        if (gender == 'M' && age > 30) {
            printf("The driver is insured.\n");
        } 
        else if (gender == 'F' && age > 25) 
        {
            printf("The driver is insured.\n");
        } 
        else
        {
            printf("The driver is not insured.\n");
        }
    } 
    else 
    {
        printf("Invalid marital status. Please enter 'M' for married or 'U' for unmarried.\n");
    }

    return 0;
}
