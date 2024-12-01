#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   int i, j, k, temp;
    for (i = 0; i < n ; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j]) 
            {
               
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    k = 0;
    for (i = 0; i < n; i++)
    {
        if ( arr[i] != arr[i+1])
        {
            arr[k++] = arr[i];
        }
    }
    for (i = 0; i < k; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
