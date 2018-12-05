#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int l,h;
    scanf("%d",&l);
    scanf("%d",&h);
    
    int num;
    int flag = 0;
    
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&num);
        if((num >= l) && (num <= h))
        {
            flag = 0;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        printf("NO");
    else
        printf("YES");
    
}
