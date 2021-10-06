/*--------------------------------------------------------------------*/
/* str.h                                            */
/* Author: Misrach Ewunetie                                            */
/*--------------------------------------------------------------------*/

#include <stddef.h>
#ifndef STR_INCLUDED
#define STR_INCLUDED

/*--------------------------------------------------------------------*/

/* Returns the length of the string pcSrc. */

size_t Str_getLength(const char pcSrc[]);

/*--------------------------------------------------------------------*/

/* Returns the string pcDest, which is a copy of the string pcSrc. */

char *Str_copy(char pcDest[], const char pcSrc[]);

/*--------------------------------------------------------------------*/

/* Returns pcDest, which is the concatination of pcDest and pcSrc. */
char *Str_concat(char pcDest[], const char pcSrc[]);

/*--------------------------------------------------------------------*/

/* Returns -1, 0, or 1 depending on whether string s1 is less than s2, they're equal, or s1 is greater than s2, relatively. */
size_t Str_compare (const char s1[], const char s2[]);

/*--------------------------------------------------------------------*/

/* Returns the address in which the first char of the string needle shows up in the string haystack. */
char *Str_search (const char haystack[], const char needle[]);

/*--------------------------------------------------------------------*/

#endif