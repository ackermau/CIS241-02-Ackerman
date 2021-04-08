#include <stdio.h>
#include "circleLib.h"
#include "newLib.h"

int main(int argc, char** argv) {
	double perm = calcPerim(10);
	double area = calcArea(10);
	double rectPerm = calcPerimRect(10, 10);
	double rectArea = calcAreaRect(10, 10);
	printf("%1f", perm);
	printf("\n");
	printf("%1f", area);
	printf("\n");
	printf("%1f", rectPerm);
	printf("\n");
	printf("%1f", rectArea);
	printf("\n");
}
