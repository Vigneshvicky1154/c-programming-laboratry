include <stdio.h>

int main()
{
    int n,row,col,t=1;
    scanf("%d", &n);

    for (row = 1; row <= n; row++) 
    {
        for (col = 1; col <=row; col++) 
        {
            printf("%d",t);
         
        }
        t++;
        printf("\n");
    }

    return 0;
}
