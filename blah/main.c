#include "file.h"
#include <stdio.h>

int main(int argc, char** argv) {
	char* contents;
	size_t size = read("data_file", &contents);
	for(size_t i = 0; i< size; ++i) {
		printf("%c", contents[i]);
	}
}
