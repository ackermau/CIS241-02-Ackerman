#include "file.h"
#include <sys/stat.h>

size_t read(char* path, char** contents) {
	struct stat st;
	stat(filename, &st);
	size_t size = st.st_size;

	FILE* fp = fopen(path, "r");
	if( fp == NULL ) {
		return 0;
	}

	*contents = malloc(sizeof(char) * size);
	size_t read_num_bytes = fread(*contents, 1, size, fp);

	fclose(fp);

	return read_num_bytes;
}


