#include "sorter.h"
#include "file_lib.h"
#include <stdio.h>

void sort(char** contents, int size) {
	int i, j;
	char* p;
	for(i = 1; i < size; i++) {
		
		p = contents[i];
		j = i-1;
		while(j >= 0 && contents[j] > p) {
			contents[j+1] = contents[j];
			j -= 1;
		}
		contents[j+1] = p;

	}	
}
