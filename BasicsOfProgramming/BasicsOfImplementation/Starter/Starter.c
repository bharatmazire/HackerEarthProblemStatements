#include<stdio.h>

int main()
{
    // variables
    int t,n,sum;
    
    // code
    scanf("%d",&t);
    for(int i = 0 ; i < t ; i++)
    {
        scanf("%d",&n);
        sum = 0;
        for(int j = 0 ; j < n ; j ++)
        {
            if(j % 3 == 0 || j % 5 == 0)
            {
                sum = sum + j;
            }
        }
        printf("%d\n",sum);
    }
}
