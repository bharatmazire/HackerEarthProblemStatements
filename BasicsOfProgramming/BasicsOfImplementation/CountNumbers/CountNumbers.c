#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    
    int n;
    
    for(int i = 0 ; i < t ; i++)
    {
        scanf("%d",&n);
        char str[n];
        
        scanf("%s",&str);
        
        int count = 0;
        for(int j = 0 ; str[j] != '\0' ; j++)
        {
            if(str[j] >= 48 && str[j] <= 57)
            {
                count ++;
                while (str[j] >= 48 && str[j] <= 57)
                {
                    j++;
                }
            }
        }
        printf("%d\n",count);
    }
    return (0);
}
