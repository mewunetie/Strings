
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
/*
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

    while (s1[i] != '\0' && s2[i] != '\0') {
      if (s1[i] > s2[i]) {
         return greaterthan;
      }
      if (s1[i] < s2[i]) {
         return lessthan;
      }
      if (s1[i] == '\0' && s2[i] != '\0') {
         return lessthan;
      }
      if (s1[i] != '\0' && s2[i] == '\0') {
         return greaterthan;
      }
      i++;
    }

    return returnval;
}

/* go over this, how to ensure that the next char after the first matching is the same?
consider doing nested loop w if == continue going and else break? */
char Str_search (const char s1[], const char s2[]) {
   size_t stringstart = '\0';
   size_t start = 0;
   size_t i = 0;

   assert(s1 != NULL);
   assert(s2 != NULL);

   while (s1[i] != '\0' && s2[start] != '\0') {
      if (s1[i] == s2[start]) {
         stringstart = i;
         start++;
         i++;

         while (s1[i] == s2[start] && s1[i] != '\0' && s2[start] != '\0') {
         start++;
         i++;
         }
      }
      
      else if (s1[i] != s2[start]) {
         start = 0;
         stringstart = '\0';
         i++;
      }
   }
   
   return stringstart;
}
