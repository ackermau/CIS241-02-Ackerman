#include "circleLib.h"
#include <math.h>

const double PI = 3.14159;

double calcPerim(double radius) {
	return (2 * PI * radius);
}

double calcArea(double radius) {
	return (PI * radius)*(PI * radius);
}
