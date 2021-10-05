/*--------------------------------------------------------------------*/
/* str.h                                            */
/* Author: Misrach Ewunetie                                            */
/*--------------------------------------------------------------------*/

#include <stddef.h>
#ifndef STR_INCLUDED
#define STR_INCLUDED

/*--------------------------------------------------------------------*/

/* Return the greatest common divisor of positive integers iFirst and
   iSecond. */

size_t Str_getLength(const char pcSrc[]);

/*--------------------------------------------------------------------*/

/* Return the least common multiple of positive integers iFirst and
   iSecond. */

char *Str_copy(char pcDest[], const char pcSrc[]);
char *Str_concat(char pcSrc1[], const char pcSrc2[]);
size_t Str_compare (const char s1[], const char s2[]);
char *Str_search (const char haystack[], const char needle[]);

size_t Str_getLength(const char *pcSrc);
char *Str_copy(char *pcDest, const char *pcSrc);
char *Str_concat(char *s1, const char *s2);
size_t Str_compare(const char *s1, const char *s2);


#endif