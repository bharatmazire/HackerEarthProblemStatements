#include<stdio.h>

int main()
{
    int bricks;
    scanf("%d",&bricks);
    
    int name;
    
    int MPCount = 1;
    int Loop = 1;
    
    while(bricks>0)
    {
        if(Loop == 1)
        {
            Loop = 2;
            bricks = bricks - MPCount;
            name = 1;
            //printf("rem = %d name = %d\n",rem,name);
        }
        else if(Loop == 2)
        {
            Loop = 1;
            bricks = bricks - (MPCount *2);
            name = 2;
            //printf("rem = %d name = %d\n",rem,name);
            MPCount++;
            if(bricks <= 0)
                break;
        }
    }
    if(name == 1)
        printf("Patlu");
    else
        printf("Motu");
    return (0);
}
