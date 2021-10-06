/*------------------------------------------------------------*/
/* stra.c */
/* Author: Misrach Ewunetie */
/*------------------------------------------------------------*/
#include "str.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
/*----------------------------------------------------------*/

char *Str_search (const char haystack[], const char needle[]) {
   size_t stringstart = 0;
   size_t i = 0;
   size_t j = 0;
   size_t h;
   size_t n;

   assert(haystack != NULL);
   assert(needle != NULL);

  h = Str_getLength(haystack);
  n = Str_getLength(needle);
 
// go through haystack until a char in haystack equals the first char in needle
for (i = 0; i < h; i++) {
    j = 1;
    if (haystack[i] == needle[0]) {
        stringstart = i;
        j++;
    }
    if (haystack[i] == needle[j]) {
        j++;
    }
    if (haystack[i] != needle[j]) {
        j = stringstart + 1;
    }
}







  size_t stringstart = 0;
   size_t i = 0;
   size_t j = 0;
   size_t lengthh;
   size_t lengthn;

   assert(haystack != NULL);
   assert(needle != NULL);

   lengthh = Str_getLength(haystack);
   lengthn = Str_getLength(needle);


  /* for (i = 0; i < lengthn; i++) { */
for (j = 0; j < lengthh; j++) {
      if (haystack[j] == needle[i]) {
         stringstart = j;
         i++;
         j++;
         while (needle[i] == haystack[j]) {
            if (needle[i] == '/0') {
            return (char*) &haystack[stringstart];
         }
            if (haystack[j] == '/0') {
               stringstart = 0;
               return (char*) &haystack[stringstart];
            }
            i++;
            j++;
         }
    } 

else if (needle[i] != haystack[j]) {
   if (haystack[j] == '/0') {
               stringstart = 0;
               return (char*) &haystack[stringstart];
            }
   i = 0;
   j = stringstart;
   stringstart = 0;
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
