#ifndef HASH_H__
#define HASH_H__ 1

#include <stdlib.h>
#include <limits.h>
#include "driver.h"

typedef unsigned short whash_t;
typedef unsigned char  chash_t;
typedef uint32_t       dwhash_t;

#define MAX_WHASH (USHRT_MAX)
#define MAX_CHASH (UCHAR_MAX)
#define MAX_DWHASH (PUINT_MAX)

#define INITIAL_DWHASH 5381

extern whash_t whashmem (const char *s, size_t len, int maxn)
                         __attribute__((nonnull(1))) __attribute__((pure));
extern whash_t whashmem2 (const char *s, size_t len, int maxn, whash_t initial)
                         __attribute__((nonnull(1))) __attribute__((pure));
extern whash_t whashstr (const char *s, int maxn)
                         __attribute__((nonnull(1))) __attribute__((pure));
extern chash_t chashstr (const char *s, int maxn)
                         __attribute__((nonnull(1))) __attribute__((pure));

extern dwhash_t dwhashmem2 (const char *s, size_t len, int maxn, dwhash_t initial);
extern dwhash_t dwhashstr (const char *s, int maxn);

#define dwhashmem(pTxt,len,maxn)   dwhashmem2(pTxt, len, maxn, INITIAL_DWHASH)

#endif /* HASH_H__ */
