#include <stdio.h>
#include "geomLib.h"

float main(){

	//Some variables had been declared to test the functions of the library "geomLib.h".

	float side = 4.3;
	float radius = 5.6;
	float height = 2.2;
	float length = 3.5, width = 2.1;
	float base1 = 2.5, base2 = 4.1;

	printf("Perimeter of square = %f\n", sqr_per(side));
	printf("Perimeter of rect = %f\n", rect_per(length, width));
	printf("Area of square = %f\n", sqr_area(side));
	printf("Area of rect = %f\n", rect_area(length, width));
	printf("Area of trgl = %f\n", trgl_area(base1, height));
	printf("Area of trpzd = %f\n", trpzd_area(base1, base2, height));
	printf("Area of circle = %f\n", circle_area(radius));
	printf("Area of circle = %f\n", circle_diam(radius));
	printf("Circum of circle = %f\n", circle_circum(radius));

	return 0;
}