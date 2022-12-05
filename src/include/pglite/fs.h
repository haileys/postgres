#ifndef PGLITE_FS_H
#define PGLITE_FS_H

#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>

#define pglite_raw_mkdir(path,mode) mkdir(path,mode)
#define pglite_raw_opendir(path) opendir(path)
#define pglite_raw_stat(path,buf) stat(path,buf)
#define pglite_raw_open(path,flags,mode) open(path,flags,mode)
#define pglite_raw_fopen(path,mode) fopen(path,mode)

int pglite_mkdir(const char* path, mode_t mode);
DIR* pglite_opendir(const char* path);

int pglite_stat(const char* restrict path, struct stat* restrict buf);
int pglite_open(const char* path, int flags, mode_t mode);

FILE* pglite_fopen(const char* path, const char* mode);


#endif
