#include <stdio.h>

int main()
{
    
    int n,row,col;
    scanf("%d",&n);

    for (row = 1; row <=n; row++) 
    {
        char c='A';

        for (col = 1; col <=row; col++)
        {
            printf("%c",c);
         c++;
        }
        
        printf("\n");
    }

    return 0;
}
