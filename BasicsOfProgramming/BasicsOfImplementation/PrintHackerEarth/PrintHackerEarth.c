// hackerearth
// h = 2
// a = 2
// c = 1
// k = 1
// e = 2
// r = 2
// t = 1
/*
0 : 2                                                                                                                                                
2 : 1                                                                                                                                                
4 : 2                                                                                                                                                
7 : 2                                                                                                                                                
10 : 1                                                                                                                                               
17 : 2                                                                                                                                               
19 : 1     
*/

#include<stdio.h>
int main()
{
    long n;
    scanf("%ld",&n);
    
    char str[n];
    scanf("%s",&str);
    
    int strcnt[26] = {0};
    int count = 0;
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        strcnt[str[i]-'a']++;
    }
    
    while(strcnt[0] >= 2)
    {
        //printf("count is : %d\n",count);
        //printf("count of %c is %d\n",0+97,strcnt[0]);
        strcnt[0] = strcnt[0] - 2;
        
        //printf("count of %c is %d\n",2+97,strcnt[2]);
        if(strcnt[2] - 1 >= 0)
            strcnt[2] = strcnt[2] - 1;
        else
            break;
            
        //printf("count of %c is %d\n",4+97,strcnt[4]);
        if(strcnt[4] - 2 >= 0)
            strcnt[4] = strcnt[4] - 2;
        else
            break;
            
        //printf("count of %c is %d\n",7+97,strcnt[7]);
        if(strcnt[7] - 2 >= 0)
            strcnt[7] = strcnt[7] - 2;
        else
            break;
            
        //printf("count of %c is %d\n",10+97,strcnt[10]);
        if(strcnt[10] - 1 >= 0)
            strcnt[10] = strcnt[10] - 1;
        else
            break;
            
        //printf("count of %c is %d\n",17+97,strcnt[17]);
        if(strcnt[17] - 2 >= 0)
            strcnt[17] = strcnt[17] - 2;
        else
            break;
            
        //printf("count of %c is %d\n",19+97,strcnt[19]);
        if(strcnt[19] - 1 >= 0)
            strcnt[19] = strcnt[19] - 1;
        else
            break;
            
        count ++;
    }
    printf("%d",count);
    return(0);
}
