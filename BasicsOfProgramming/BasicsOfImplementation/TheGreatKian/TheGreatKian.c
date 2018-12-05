#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    long s1 = 0;
    long s2 = 0;
    long s3 = 0;
    for(int i = 0; i < n ; i = i + 3)
    {
        s1 += arr[i];
    }
    for(int i = 1; i < n ; i = i + 3)
    {
        s2 += arr[i];
    }
    for(int i = 2; i < n ; i = i + 3)
    {
        s3 += arr[i];
    }
    printf("%ld %ld %ld",s1,s2,s3);
    return(0);
}
