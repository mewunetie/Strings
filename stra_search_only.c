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
   size_t boolean = 0;
   size_t h;
   size_t n;

   assert(haystack != NULL);
   assert(needle != NULL);

  h = Str_getLength(haystack);
  n = Str_getLength(needle);
 
// go through haystack until a char in haystack equals the first char in needle
for (i = 0; i < h; i++) {
    if (haystack[i] == needle[0]) {
        stringstart = i;
        boolean = 1;
    }
    while (haystack[i] == needle[j] && needle[j] != '/0' && haystack[i] != '/0') {
        j++;
        i++;
         boolean = 1;
}
      if (needle[j] == '/0') {
         return (char *) & haystack[stringstart];
      }

      if (haystack[i] != needle[j]){
         if (boolean = 1) {
            i = stringstart;
         }
         j = 0;
      }
}



    if (haystack[i] != needle[j]) {
        j = stringstart + 1;
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

char *Str_search (const char haystack[], const char needle[]) {
   size_t stringstart = 0;
   size_t i = 0;
   size_t j;
   size_t lastequal = 0;

   assert(haystack != NULL);
   assert(needle != NULL);



while (haystack[i] != '\0') {
if (haystack[i] == needle[0]) {
        stringstart = i;
        lastequal = 1;

while (haystack[i] == needle[j] && needle[j] != '\0') {
        lastequal = 1;
        i++;
        j++;
   if (needle[j] == '\0') {
   return (char*) &haystack[stringstart];
   }
}
}

if (haystack[i] != needle[0]) {
       if (lastequal == 1) {
        i = stringstart;
}
        lastequal = 0;
        stringstart = 0;
        i++;
 }
}

   return '\0';
}

for (i = 0; i < h; i++) {
    if (haystack[i] == needle[0]) {
        stringstart = i;
         /* lastequal = 1; */
    }
    while (haystack[i] == needle[j] && needle[j] != '/0' && haystack[i] != '/0') {
        j++;
        i++;
         /* lastequal = 1; */
}
      if (needle[j] == '/0') {
         return (char *) & haystack[stringstart];
      }

      if (haystack[i] != needle[j]){
        /* if (lastequal == 1) {
            i = stringstart;
         }
         */
         j = 0;
      }
}

return NULL;

}




// pointer version

const char *p1;
   const char *p2;
   const char *pointer;
   const char *start;
   size_t stringstart = 0;
   size_t lengthofneedle;

   assert(haystack != NULL);
   assert(needle != NULL);

   p1 = haystack;
   p2 = needle;
   lengthofneedle = Str_getLength(needle);

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
         p2 - (lengthofneedle);
      }
}

return NULL;

}










char *Str_search (const char haystack[], const char needle[]) {
  size_t stringstart = 0;
   size_t i = 0;
   size_t j = 0;
   size_t lengthh;
   size_t lengthn;

   assert(haystack != NULL);
   assert(needle != NULL);

   lengthh = Str_getLength(haystack);
   lengthn = Str_getLength(needle);


for (i = 0; i < lengthn; i++) { 
i = 0;
for (j = 0; j < lengthh; j++) {
      if (haystack[j] == needle[i]) {
         stringstart = j;
         i++;
         j++;
      }
         while ((haystack[j] == needle[i])) {
            i++;
            j++;
         }

          if (needle[i] == '/0') {
            return (char*) &haystack[stringstart];
         }

         if (haystack[j] == '/0') {
               stringstart = lengthh;
               return (char*) &haystack[stringstart];
         }
    

if (needle[i] != haystack[j]) {
   if (haystack[j] == '/0') {
               stringstart = lengthh;
               return (char*) &haystack[stringstart];
            }
   stringstart = 0;
}
   }
}

return NULL;
}