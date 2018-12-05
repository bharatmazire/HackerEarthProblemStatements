#include<stdio.h>

int main()
{
    char str[1000];
    scanf("%s",&str);
    char ch[4] = {'l','o','v','e'};
    int p = 0;
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if(p == 4)
            break;
        if(str[i] == ch[p])
        {
            p++;
        }
    }
    if(p == 4)
        printf("I love you, too!");
    else
        printf("Let us breakup!");
        
    return(0);
}
