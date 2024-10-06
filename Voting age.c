#include <stdio.h>

int main()
{
    int age;
    scanf("%d",&age);
    if (age>=18 && age<=110)
    {
        printf("you are eligible to vote");
    }
    else if (age<18 && age>0)
    {
        printf("you are not eligible to vote");
        
    }
    else 
    {
    (age<0 && age>110);
    printf("invalid age");
    }
    
   
    return 0;
}
