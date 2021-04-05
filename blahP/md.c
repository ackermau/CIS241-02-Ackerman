#include <stdio.h>
#include <stdlib.h>

void printer(int* mult, int size){
	for(int i=0; i<size; ++i){
		for(int j=0; j<size; ++j){
			printf("%d\t", *(mult + size * i + j));
		}
		printf("\n");
	}
}

int main(int argc, char** argv){

	int size = atoi(argv[1]);

	int* mult = malloc(size * size * sizeof(int));
	printf("the size of mult is %lu.\n", sizeof(mult));
	for (int i=0; i<size; ++i){
		for (int j=0; j<size; ++j){
			*( mult + size * i + j ) = (i+1) * (j+1);
		}
	}
	printer(mult, size);
	free(mult);

}
