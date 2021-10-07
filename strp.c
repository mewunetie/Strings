/*------------------------------------------------------------*/
/* strp.c */
/* Author: Misrach Ewunetie */
/*------------------------------------------------------------*/
#include "str.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
/*----------------------------------------------------------*/

size_t Str_getLength(const char *pcSrc)
{
   const char *pcEnd;
   assert(pcSrc != NULL);
   pcEnd = pcSrc;
   while (*pcEnd != '\0')
      pcEnd++;
   return (size_t)(pcEnd - pcSrc);
}

char *Str_copy(char *pcDest, const char *pcSrc)
{
   char *dest = pcDest;

   assert(pcSrc != NULL);
   assert(pcDest != NULL);

   while ((*dest++ = *pcSrc++))
   ;

   return pcDest;
}

char *Str_concat(char *pcDest, const char *pcSrc) {
   char *dest = pcDest;

   assert(pcDest != NULL);
   assert(pcSrc != NULL);

   while (*dest) {
      dest++;
   }

   while ((*dest++ = *pcSrc++))
     ;
   
   

   return pcDest;
}

size_t Str_compare(const char *s1, const char *s2) {
   const char *p1;
   const char *p2;

   size_t returnval = 0;
   size_t lessthan = -1;
   size_t greaterthan = 1;

   assert(s1 != NULL);
   assert(s2 != NULL);

   p1 = s1;
   p2 = s2;

    while (*p1 != '\0' || *p2 != '\0') {
       if (*p1 == '\0' && *p2 != '\0') {
         return lessthan;
       }
        if (*p1 != '\0' && *p2 == '\0') {
          return greaterthan;
       }
        if (*p1 > *p2) {
          return greaterthan;
       }
        if (*p1 < *p2) {
          return lessthan;
       }

      p1++;
      p2++;
   }

   return returnval;
}


char *Str_search(const char *haystack, const char *needle) {
   const char *p1;
   const char *p2;
   const char *index;
   size_t found = 0;
   size_t lengthofhaystack;
   size_t lengthofneedle;

   assert(haystack != NULL);
   assert(needle != NULL);

   p1 = haystack;
   index = haystack;
   p2 = needle;

   lengthofneedle = Str_getLength(needle);
   lengthofhaystack = Str_getLength(haystack);

    if (lengthofneedle > lengthofhaystack) {
      return NULL;
   }


   while (*index != '\0') {
      if (*p1 == *p2) {
         found = 1;
         while (*p2 != '\0') {
            if (*p1 != *p2) {
               found = 0;
               break;
            }
            else {
               found = 1;
            }
         }
         if (found) {
            return (char*)index;
         }
      }
      else {
         index++;
      }
   }

   return NULL;
   
}










   