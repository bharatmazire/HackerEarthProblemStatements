#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    long sum = 0;
    long num;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%ld",&num);
        sum += num;
    }
    printf("%ld",sum);
    return(0);
}
