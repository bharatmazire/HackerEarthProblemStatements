#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Anagrams(char* s1,char* s2)
{
   int countOfCharInS1[26] = {0};
   int countOfCharInS2[26] = {0};
   int asciiOfChar         = -1;

   int i = 0;
   while(s1[i] != '\0')
   {
      // a = 97, A = 65
      asciiOfChar = s1[i];
      if(asciiOfChar >= 97)
         asciiOfChar = asciiOfChar - 32;
      
      countOfCharInS1[(asciiOfChar - 65)] = countOfCharInS1[(asciiOfChar - 65)] + 1;
      i = i + 1;
   }

   asciiOfChar    = -1;
   i           = 0;
   while(s2[i] != '\0')
   {
      // a = 97, A = 65
      asciiOfChar = s2[i];
      if(asciiOfChar >= 97)
         asciiOfChar = asciiOfChar - 32;
      
      countOfCharInS2[(asciiOfChar - 65)] = countOfCharInS2[(asciiOfChar - 65)] + 1;
      i = i + 1;
   }

   i = 0;
   int NumberofCharToDelete = 0;
   for(i = 0; i < 26; i++)
   {
      if(countOfCharInS1[i] != countOfCharInS2[i])
      {
         if(countOfCharInS1[i] < countOfCharInS2[i])
         {
            NumberofCharToDelete = NumberofCharToDelete + ( countOfCharInS2[i] - countOfCharInS1[i] );
         }
         else
         {
            NumberofCharToDelete = NumberofCharToDelete + ( countOfCharInS1[i] - countOfCharInS2[i] );
         }
      }
   }

   if(NumberofCharToDelete == 0)
   {
      printf("TWO STRINGS ARE ALREADY ANAGRAMS.");
   }
   else
   {
      printf("%d",NumberofCharToDelete);
   }
}

int main(void)
{
   char* s1 = (char*)malloc(sizeof(char)*10001);
   char* s2 = (char*)malloc(sizeof(char)*10001);
   scanf("%s",s1);
   scanf("%s",s2);
   Anagrams(s1,s2);
   return 0;
}
