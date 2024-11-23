#include <stdio.h>

int main()
{
    char c='A';
    int n,row,col;
    scanf("%d",&n);

    for (row = 1; row <=n; row++) 
    {

        for (col = 1; col <=row; col++)
        {
            printf("%c",c);
         c++;
        }
        
        printf("\n");
    }

    return 0;
}
