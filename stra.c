/*------------------------------------------------------------*/
/* stra.c */
/* Author: Misrach Ewunetie */
/*------------------------------------------------------------*/
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
/*----------------------------------------------------------*/

/* ask about knowing which libraries to include in header & how to test while writing code*/

size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);

   while (pcSrc[uLength] != '\0') {
      uLength++;
   }
   return uLength;
}

char *Str_copy(char pcDest[], const char pcSrc[])
{
   int i = 0;
   assert(pcSrc != NULL);
   assert(pcDest != NULL);

   while (pcSrc[i] != '\0') {
       pcDest[i] = pcSrc[i];
       i++;
   }

return pcDest;
}

char *Str_concat(char pcSrc1[], const char pcSrc2[])
{
   int src1length = sizeof(pcSrc1)/sizeof(char);
   int src2length = sizeof(pcSrc2)/sizeof(char);
   int lengthofarrays = (src1length) + (src2length);
   int  pcDest[lengthofarrays];
   int j = 0;

   assert(pcSrc1 != NULL);
   assert(pcSrc2 != NULL);

  

   /* check that the start/end points are correct */
   
   for (int i = 0; i < src1length; i++) { 
      pcDest[i] = pcSrc1[i];
   }

   for (int i = src1length; i < lengthofarrays; i++) {
      pcDest[i] = pcSrc2[j];
      j++;
   }

   return pcDest;
}

int Str_compare (const char s1[], const char s2[]){
   int returnval = 0;

   assert(s1 != NULL);
   assert(s2 != NULL);

   for (int i = 0; i != '\n'; i++){
      if (s1[i] > s2[i]) {
         return 1;
      }
      if (s1[i] < s2[i]) {
         return -1;
      }
   }
    return returnval;
}

/* go over this, how to ensure that the next char after the first matching is the same?
consider doing nested loop w if == continue going and else break? */
char Str_search (const char s1[], const char s2[]) {
   int stringstart = '\0';
   int start = 0;

   assert(s1 != NULL);
   assert(s2 != NULL);

   for (int i = 0; i != '\0'; i++) {
      if (s1[i] == s2[start]) {
         stringstart = i;

         while (s1[i] == s2[start] && i != '\0' && start != '\0') {
         start++;
         i++;
         }
      }
      
      else if (s1[i] != s2[start]) {
         start = 0;
      }
   }

   return stringstart;
}