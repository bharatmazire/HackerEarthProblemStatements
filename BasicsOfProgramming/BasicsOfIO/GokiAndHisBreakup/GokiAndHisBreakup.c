#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int x;
    scanf("%d",&x);
    
    int i;
    int skill;
    for(i = 0; i < n; i++)
    {
        scanf("%d",&skill);
        if(skill>=x)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return(0);
}
