/*------------------------------------------------------------*/
/* strp.c */
/* Author: Misrach Ewunetie */
/*------------------------------------------------------------*/
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

   while (*p != '\0') {
      p++;
   }

    while (s2 != '\0') {
      *p = *s2;
      p++;
      s2++;
   }

   *p = '\0';

   return s1;
}

size_t Str_compare(const char *s1, const char *s2) {
   char *p = s1;
   size_t returnval = 0;
   size_t lessthan = -1;
   size_t greaterthan = 1;

   assert(s1 != NULL);
   assert(s2 != NULL);

    while (*p != '\0' || s2 != '\0') {
       if (*p == '\0' && s2 != '\0') {
         return lessthan;
       }
        if (*p != '\0' && s2 == '\0') {
          return greaterthan;
       }
        if (*p > s2) {
          return lessthan;
       }
        if (*p < s2) {
          return greaterthan;
       }
      p++;
      s2++;
   }

   return returnval;
}

/* char Str_search(const char *s1, const char *s2) {

}
*/