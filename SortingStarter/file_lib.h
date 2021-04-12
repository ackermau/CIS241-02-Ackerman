#ifndef			__FILE_LIB_H__
#define			__FILE_LIB_H__
#include <stdlib.h>

size_t load_file(char* path, char** contents);
size_t save_file(char* path, char* contents, size_t size);

#endif
