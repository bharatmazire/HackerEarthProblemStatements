#include<stdio.h>

int main()
{
    char str[100];
    scanf("%s",str);
    
    int i;
    int sum = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        sum = sum + (str[i]-96);
    }
    printf("%d",sum);
    
    return (0);
}
