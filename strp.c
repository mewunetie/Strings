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

/* int Str_compare(const char *s1, const char *s2) {

}

char Str_search(const char *s1, const char *s2) {

}
*/