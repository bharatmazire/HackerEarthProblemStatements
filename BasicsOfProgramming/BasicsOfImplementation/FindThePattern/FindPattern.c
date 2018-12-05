#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    long min = 0;
    long max = 0;
    
    long s = 0;
    
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%ld",&s);
        if(s > max)
        {
            max = s;
        }
        if(i == 0)
        {
            min = s;
        }
        else if(s < min)
        {
            min = s;
        }
        
    }
    printf("%ld",min+max);
}
