#include<stdio.h>

int main()
{
    char str[100];
    scanf("%s",&str);
    int count = 0;
    for(int i = 0 ; str[i] != '\0'; i++)
    {
        count ++;
    }
    int i = 0;
    count--;
    while(i < count)
    {
        if(str[i] != str[count])
        {
            printf("NO");
            return(0);
        }
        i++;
        count--;
    }
    printf("YES");
    return(0);
}
