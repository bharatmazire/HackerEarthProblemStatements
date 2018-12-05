#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int a,k,n;
    for(int i = 0 ; i < t ; i ++)
    {
        scanf("%d",&a);
        scanf("%d",&k);
        scanf("%d",&n);
        printf("%d\n",a+(k*(n-1)));
    }
    return(0);
}
