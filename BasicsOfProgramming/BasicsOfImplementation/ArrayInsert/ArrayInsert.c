#include<stdio.h>

int main()
{
    int n,q;
    scanf("%d",&n);
    scanf("%d",&q);
    int arr[n];
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d",&arr[i]);
    }
    
    int type,f,s,sum;
    for(int i = 0 ; i < q ; i++)
    {
        scanf("%d",&type);
        scanf("%d",&f);
        scanf("%d",&s);
        if(type == 1)
        {
            arr[f] = s;
        }
        else if(type == 2)
        {
            sum = 0;
            for(int j = f ; j <= s ; j++)
            {
                sum += arr[j];
            }
            printf("%d\n",sum);
        }
        
    }
    return(0);
}
