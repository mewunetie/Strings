/*------------------------------------------------------------*/
/* stra.c */
/* Author: Misrach Ewunetie */
/*------------------------------------------------------------*/
#include "str.h"
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
   size_t i = 0;
   assert(pcSrc != NULL);
   assert(pcDest != NULL);

   while (pcSrc[i] != '\0') {
       pcDest[i] = pcSrc[i];
       i++;
   }
   pcDest[i] = '\0';

return pcDest;
}

char *Str_concat(char pcDest[], const char pcSrc[])
{
   size_t destlength;
   size_t i = 0;

   assert(pcDest != NULL);
   assert(pcSrc != NULL);

   destlength = Str_getLength(pcDest);

  
   while(pcSrc[i] != '\0') {
      pcDest[destlength] = pcSrc[i];
      destlength++;
      i++;
   }
   
   pcDest[destlength] = '\0';

   return pcDest;
}

size_t Str_compare (const char s1[], const char s2[]){
   size_t returnval = 0;
   size_t i = 0;
   size_t lessthan = -1;
   size_t greaterthan = 1;

   assert(s1 != NULL);
   assert(s2 != NULL);

    while (s1[i] != '\0' || s2[i] != '\0') {
       if (s1[i] == '\0' && s2[i] != '\0') {
         return lessthan;
      }
      if (s1[i] != '\0' && s2[i] == '\0') {
         return greaterthan;
      }
      if (s1[i] > s2[i]) {
         return greaterthan;
      }
      if (s1[i] < s2[i]) {
         return lessthan;
      }
      i++;
    }

    return returnval;
}

/* go over this, how to ensure that the next char after the first matching is the same?
consider doing nested loop w if == continue going and else break? */
char *Str_search (const char haystack[], const char needle[]) {
   size_t stringstart = 0;
   size_t i = 0;
   size_t j = 0;
   size_t lengthh = Str_getLength(haystack);
   size_t lengthn = Str_getLength(needle);

   assert(haystack != NULL);
   assert(needle != NULL);


   for (i = 0; i < lengthn; i++) {
       for (j = 0; j < lengthh; j++) {
      if (haystack[j] == needle[i]) {
         stringstart = j;
          i++;
         j++;
         while (needle[i] == haystack[j] && i < lengthn) {
            if (j == lengthh) {
               stringstart = 0;
               return (char*) &haystack[stringstart];
            }
            i++;
            j++;
         }
      }

else if (needle[i] != haystack[j] && j < lengthh && i < lengthn) {
   i = 0;
   stringstart = 0;
}

   }
}
return (char*) &haystack[stringstart];
}




/*
 if (needle[i] == haystack[j]) {
         stringstart = j;
         i++;
         j++;
         while (needle[i] == haystack[j] && needle[i] != '\0') {
            if (haystack[j] == '\0') {
               stringstart = 0;
               return (char*) &haystack[stringstart];
            }
            i++;
            j++;
         }
      }

else if (needle[i] != haystack[j] && haystack[j] != '\0' && needle[i] != '\0') {
   j++;
   i = 0;
   stringstart = 0;
}

return (char*) &haystack[stringstart];
}
*/
