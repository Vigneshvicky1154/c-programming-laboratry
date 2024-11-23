#include <stdio.h>
int main() {
    int n,i,k,c=1,t,r,a=0;
    scanf("%d %d",&n,&k);
    for(i=1;c<=n;i++)
    {
    if (i%k==0)
    {
    a=i;
    c++;
    }
    else{
    t=i;
    while(t!=0)
    {
    r=t%10;
    if(r==k)
    {
    a=i;
    c++;
    break;
    }
    t=t/10;
    }
    }
    
    }
    
 printf("%d",a);   
    
    return 0;
}

