#include<stdio.h>

int main()
{
    
    int lr = 0;
    int ud = 0;
    char str[100000];
    scanf("%s",&str);
    
    for(int i = 0 ; str[i] != '\0'; i++)
    {
        if(str[i] == 'L')
            lr --;
        else if(str[i] == 'R')
            lr ++;
        else if(str[i] == 'D')
            ud --;
        else if(str[i] == 'U')
            ud ++;
    }
    
    printf("%d %d",lr,ud);
    return (0);
}
