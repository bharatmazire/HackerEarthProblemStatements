#include<stdio.h>

int main()
{
    int TestCase,i;
    int SH,SM,EH,EM;
    int TH,TM;
    
    scanf("%d",&TestCase);
    
    for(i = 0; i< TestCase; i++)
    {
        scanf("%d",&SH);
        scanf("%d",&SM);
        scanf("%d",&EH);
        scanf("%d",&EM);
        
        TM = EM + (60-SM);
        
        TH = TM / 60;
        TM = TM % 60;
        
        TH = (TH + (EH - (SH + 1)));
        
        printf("%d %d\n",TH,TM);
    }
    
    return (0);
}
