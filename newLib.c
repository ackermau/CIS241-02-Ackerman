#include "newLib.h"

double calcPerimRect(double length, double width) {
	double perim = 2 * (length + width);
	return perim;
}

double calcAreaRect(double length, double width) {
	double area = width * length;
	return area;
}
