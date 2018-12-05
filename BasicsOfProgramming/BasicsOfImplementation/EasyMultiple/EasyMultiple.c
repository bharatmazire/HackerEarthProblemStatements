#include<stdio.h>

int main()
{
    long long t,n;

    scanf("%ld",&t);
    for(int i = 0 ; i < t ; i++)
    {
        long long sum = 0;
        scanf("%ld",&n);
        long tx = (n-1)/3;
        long fx = (n-1)/5;
        for(long i = 1; i <= tx ; i++)
        {
            long v = 3 * i;
            if(v % 5 != 0)
            {
                sum += v;
            }
        }
        for(long i = 1; i <= fx; i++)
        {
            sum += (5 * i);
        }
        printf("%ld\n",sum);
    }
    return(0);
}
