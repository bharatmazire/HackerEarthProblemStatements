

#include <stdio.h>
//#include <string.h>
int IsIdentical(char * str1, char * str2)
{
    int i;
    int count1[26] = {0};
    int count2[26] = {0};
    
    for (i = 0 ; str1[i] != '\0';i++)
        count1[str1[i]-'a'] = count1[str1[i]-'a'] + 1;

    for (i = 0 ; str2[i] != '\0';i++)
        count2[str2[i]-'a'] = count2[str2[i]-'a'] + 1;

    for(i = 0 ; i < 26 ; i++)
    {
        if(count1[i] != count2[i])
            return 0;
    }
    return 1;
}
int main(){
	int num;
	char str1[100000];
    char str2[100000];
	scanf("%d", &num);              			// Reading input from STDIN
    int  i;
    for (i = 0 ; i < num ; i ++)
    {
        
        scanf("%s",str1);
        scanf("%s",str2);
        if(IsIdentical(str1,str2))
            printf("YES\n");

        else
            printf("NO\n");
    }
}
