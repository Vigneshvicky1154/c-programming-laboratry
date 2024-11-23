#include <stdio.h>

int main()
{
    int n,row,col;
    scanf("%d", &n);

    for (row = 1; row <= n; row++) 
    {
        int t=1;
        for (col = 1; col <=row; col++)
        {
            printf("%d",t);
         t++;
        }
        
        printf("\n");
    }

    return 0;
}
