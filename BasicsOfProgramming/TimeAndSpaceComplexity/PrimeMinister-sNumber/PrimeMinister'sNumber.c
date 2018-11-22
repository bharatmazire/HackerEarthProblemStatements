#include<stdio.h>

int IsPrime(int num)
{
    if(num == 1 || num == 2 || num == 3 || num == 5)
        return (1);
    if(num % 2 == 0)
        return(0);
    for(int i = 3; i < num / 2; i = i + 2)
    {
        if(num % i == 0)
            return (0);
    }
    return (1);
}

int main()
{
    int l,h;
    scanf("%d",&l);
    scanf("%d",&h);
    for(int i = l; i <= h; i++)
    {
        int num = i;
        int sum = 0;
        
        if(IsPrime(i))
        {
            while(num)
            {
               sum += num %10;
               num = num / 10;
            }
            if(IsPrime(sum))
            {
                printf("%d ",i);
            }
        }

    }
    return(0);
}
