/*--------------------------------------------------------------------*/

#include <stddef.h>
#ifndef STR_INCLUDED
#define STR_INCLUDED

/*--------------------------------------------------------------------*/

size_t Str_getLength(const char *pcSrc);
char *Str_copy(char *pcDest, const char *pcSrc);
char *Str_concat(char *s1, const char *s2);
size_t Str_compare(const char *s1, const char *s2);

#endif