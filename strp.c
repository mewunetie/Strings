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
   char *p = pcDest;

   assert(pcSrc != NULL);
   assert(pcDest != NULL);

   while (*p++ = *pcSrc++)
   ;

   return pcDest;
}

char *Str_concat(char *s1, const char *s2) {
   char *p = s1;

   assert(s1 != NULL);
   assert(s2 != NULL);

   while (*p) {
      p++;
   }

    while (*p++ = *s2++) 
     ;
   

   return s1;
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
   const char *pointer;
   const char *start;
   size_t stringstart = 0;
   size_t lengthofhaystack = 0;

   assert(haystack != NULL);
   assert(needle != NULL);

   p1 = haystack;
   p2 = needle;
   lengthofhaystack = Str_getLength(*needle);

while(*p1 != '\0') {

    if (*p1 == *p2) {
        pointer = p1;
       
    }
    while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0') {
        p1++;
        p2++;
}
      if (*p2 != '\0') {
         return pointer;
      }

      if (*p1 != *p2){
         return NULL;
      }
}

return NULL;

}
