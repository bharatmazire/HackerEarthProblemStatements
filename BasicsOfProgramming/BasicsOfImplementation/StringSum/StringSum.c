#include<stdio.h>

int main()
{
    char str[1000];
    scanf("%s",&str);
    int count;
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        count += str[i]-'a'+1;
    }
    printf("%d",count);
    return(0);
}
