#include <stdio.h>
#include "circleLib.h"

int main(int argc, char** argv) {
	double perm = calcPerim(10);
	double area = calcArea(10);
	printf("%1f", perm);
	printf("\n");
	printf("%1f", area);
	printf("\n");
}
