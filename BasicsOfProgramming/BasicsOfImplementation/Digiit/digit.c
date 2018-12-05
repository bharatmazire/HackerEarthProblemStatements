#include<stdio.h>

int main()
{
    char s[1000000000];
    scanf("%s",&s);
    long long count = 0;
    while (s[count] != '\0')
    {
        count ++;
    }
    printf("%lld",count);
    return(0);
}
