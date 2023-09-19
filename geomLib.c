#include <math.h>
#include "geomLib.h"

#define PI 3.141592

//Calculates de perimeter of a square given a side.
float sqr_per(float side) {
	return 4 * side;
}

//Calculates de perimeter of a rectangle given a length and a width.
float rect_per(float length, float width) {
	return 2 * (length + width);
}

//Calculates de area of a square given a side.
float sqr_area(float side) {
	return side * side;
}

//Calculates de area of a rectangle given a length and a width.
float rect_area(float length, float width) {
	return length * width;
}

//Calculates de area of a triangle given a base and a height.
float trgl_area(float base, float height) {
	return ((1.0 / 2.0) * base * height);
}

//Calculates de area of a trapezoid given two bases and a height.
float trpzd_area(float base1, float base2, float height) {

	float sum = base1 + base2;

	return ((1.0 / 2.0) * sum * (height));
}

//Calculates de area of a circle given a radius.
float circle_area(float radius) {

	float powRad = radius * radius;

	return PI * powRad;
}

//Calculates de diameter of a circle given a radius.
float circle_diam(float radius) {
	return 2 * radius;
}

//Calculates de circumference of a circle given a radius.
float circle_circum(float radius) {
	return 2 * PI * radius;
}