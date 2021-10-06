/*------------------------------------------------------------*/
/* stra.c */
/* Author: Misrach Ewunetie */
/*------------------------------------------------------------*/
#include "str.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
/*----------------------------------------------------------*/

/* increment a variable until null char is reached */
size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);

   while (pcSrc[uLength] != '\0') {
      uLength++;
   }
   return uLength;
}


/* set the indices of pcDest equal to pcSrc until the entire string is in pcDest */
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

/* set the indices after all of the chars of pcDest equal to pcSrc until the entire string is in pcDest */
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

/* check whether each char of both strings s1 and s2 are equal, until finding one that isn't. then, return -1, 1, or 0 depending on their equality. */
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

/*  */
char *Str_search (const char haystack[], const char needle[]) {
   size_t i = 0;
   size_t found = 0;
   size_t haystacklength;
   size_t needlelength;
   size_t index = 0;


   
   assert(haystack != NULL);
   assert(needle != NULL);

   haystacklength = Str_getLength(haystack);
   needlelength = Str_getLength(needle);

/*check whether needle is greater than haystack */
   if (needlelength > haystacklength) {
      return NULL;
   }

/* go through haystack until one index is equal to the first index of needle */
   while (haystack[index] != '/0') {

      /* if equal character is found, set boolean equal to true (1) and iterate through until the end of the needle */
      if (needle[0] == haystack[index]) {
         found = 1;
         for (i = 0; i < needlelength; i++) {

            /* if characters aren't equal, break out of for loop in order to continue iterating to see if any chars are equal to first char of needle */

            if (haystack[index + i] != needle[i]) {
               found = 0;
               break;
            }
            else {
               found = 1;
            }
         }
         /* once out of the for loop and at the end of the needle, if the last chars were equal, return the index of the first occurance of the first char of needle in haystack */
         if (found) {
            return &haystack[index];
         }
      }
      else {
         index++;
      }
   }

   /* if needle isn't in haystack, return NULL */
   return NULL;
   
}
 


