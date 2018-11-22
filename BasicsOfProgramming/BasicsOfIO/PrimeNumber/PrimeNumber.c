
// Sample code to perform I/O:
#include <stdio.h>

int isPrime(int);

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
        int i ;
        for(i = 2 ; i < num ; i ++)
        {
            if (isPrime(i))
                printf("%d ",i);
        }
    return 0;
}

int isPrime(int num)
{
    int i ;
    for (i = 2 ; i < num ; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
