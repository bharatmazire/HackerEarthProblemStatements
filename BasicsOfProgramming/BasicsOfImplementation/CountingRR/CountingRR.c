#include<stdio.h>

int main()
{
    char str[100000];
    scanf("%s",&str);
    
    
    
    int c = 0;
    
    
    for(int i = 1 ; str[i] != '\0'; i++)
    {
        if(str[i] == 'r' && str[i-1] == 'r')
        {
            c++;
        }
    }
    
    
    printf("%d",c);
    return(0);
}
