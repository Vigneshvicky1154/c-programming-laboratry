#include <stdio.h>
int main() 
{
    char a[20];
    scanf("%s",a);
    int i=0,d=0;
    while(a[i]!='\0')
    {
        d=d*2;
        if(a[i]=='1')
        {
            d=d+1;
        }
        i++;
    }
	printf("%d",d);
	return 0;

}


