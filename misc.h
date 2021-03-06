/* Notes */ /*{{{C}}}*//*{{{*/
/*

This file is free software; as a special exception the author gives
unlimited permission to copy and/or distribute it, with or without
modifications, as long as this notice is preserved.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*/
/*}}}*/

#ifndef MISC_H
#define MISC_H

#ifdef BROKEN_REALLOC
#define realloc(p,s) myrealloc(p,s)
extern void *myrealloc(void *p, size_t n);
#endif

#ifndef HAVE_STRERROR
extern char *strerror(int err);
#endif

#ifndef _POSIX_PATH_MAX
#ifdef MAX_PATH
#define _POSIX_PATH_MAX MAX_PATH
#endif
#endif

#endif
