#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int n;
    for(int i = 0 ; i < t  ; i ++)
    {
        scanf("%d",&n);
        for(int j = 1 ; j <= n ; j ++)
        {
            for(int k = n - j ; k > 0 ; k--)
            {
                printf(" ");
            }
            for(int l = 1; l <= j + (j - 1) ; l ++)
            {
                printf("*");
            }
            printf("\n");
            
        }
    }
    return (0);
}
