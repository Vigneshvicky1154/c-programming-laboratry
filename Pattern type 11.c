
#include<stdio.h>

int main()
{
    
    int n,row,col;
    scanf("%d",&n);

    for (row=n; row>0; row--) 
    {
      
       for (col=row; col>0; col--)
        {
            printf("%d  ",col);
            
        }
        
        printf("\n");
    }

    return 0;
}
