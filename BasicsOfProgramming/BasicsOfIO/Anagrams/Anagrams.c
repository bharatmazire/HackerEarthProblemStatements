#include <stdio.h>

int MyFunction(char *str1, char *str2)
{
    int count,i;
    int LetterArrayCapStr1[26] = {0};
    int LetterArrayLowStr1[26] = {0};
    
    int LetterArrayCapStr2[26] = {0};
    int LetterArrayLowStr2[26] = {0};
    
    for(i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i]>96)
        {
            // low case
            LetterArrayLowStr1[str1[i]-97] = LetterArrayLowStr1[str1[i]-97] + 1;
        }
        else
        {
            // up case
            LetterArrayCapStr1[str1[i]-64] = LetterArrayCapStr1[str1[i]-64] + 1;
        }
    }
    
    for(i = 0; str2[i] != '\0'; i++)
    {
        if(str2[i]>96)
        {
            // low case
            LetterArrayLowStr2[str2[i]-97] = LetterArrayLowStr2[str2[i]-97] + 1;
        }
        else
        {
            // up case
            LetterArrayCapStr2[str2[i]-64] = LetterArrayCapStr2[str2[i]-64] + 1;
        }
    }
    
    for(i = 0; i < 26; i++)
    {
        count += abs(LetterArrayLowStr2[i] - LetterArrayLowStr1[i]);
    }
    
    for(i = 0; i < 26; i++)
    {
        count += abs(LetterArrayCapStr2[i] - LetterArrayCapStr1[i]);
    }
    
    return count;
}

int main()
{
    
    int TestCase,count,i;
    char str1[10000];
    char str2[10000];
    
    scanf("%d",&TestCase);
    
    for(i = 0; i < TestCase; i++)
    {
        scanf("%s",&str1);
        scanf("%s",&str2);
        count = MyFunction(str1,str2);
        printf("%d\n",count);
    }
    return (0);
}

