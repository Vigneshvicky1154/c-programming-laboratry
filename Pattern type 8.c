#include <stdio.h>

int main()
{
    
    int n,row,col;
    scanf("%d",&n);

    for (row=n; row>0; row--) 
    {
       int t=1;
       for (col=1; col<=row; col++)
        {
            printf("%d  ",t);
            t++;
        }
        
        printf("\n");
    }

    return 0;
}
