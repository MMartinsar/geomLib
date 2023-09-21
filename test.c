#include <stdio.h>
#include "geomLib.h"

float main() {

	//Some variables had been declared to test the functions of the library "geomLib.h".

	float side1 = 4.3, side2 = 3.7, side3 = 2.8;
	float radius = 5.6;
	float height = 2.2;
	float length = 3.5, width = 2.1;
	float base1 = 2.5, base2 = 4.1;
	float area = 5.5;
	float radian = 2;
	float volume = 10.7;

	//2D examples:

	printf("\n2D test\n\n");

	printf("Perimeter of a square = %f\n", sqr_per(side1));
	printf("Area of a square = %f\n", sqr_area(side1));
	printf("Diagonal of a square = %f\n", sqr_diag(side1));
	printf("Side of a square = %f\n", sqr_side(area));
	printf("Perimeter of a rectangle = %f\n", rect_per(length, width));
	printf("Area of a rectangle = %f\n", rect_area(length, width));
	printf("Diagonal of a rectangle = %f\n", rect_diag(length, width));
	printf("Perimeter of a parallelogram = %f\n", prllgrm_per(side1, side2));
	printf("Area of a parallelogram = %f\n", prllgrm_area(base1, height));
	printf("Height of a parallelogram = %f\n", prllgrm_height(area, base1));
	printf("Base of a parallelogram = %f\n", prllgrm_base(area, height));
	printf("Hypotenuse of a right triangle = %f\n", hypotenuse(base1, height));
	printf("Area of a triangle = %f\n", trgl_area(base1, height));
	printf("Perimeter of a triangle = %f\n", trgl_per(side1, side2, side3));
	printf("Perimeter of a right triangle = %f\n", rgt_trgl_per(base1, height));
	printf("Area of a trapezoid = %f\n", trpzd_area(base1, base2, height));
	printf("Length of an arc = %f\n", arc_len(radius, radian));
	printf("Area of a circle = %f\n", circle_area(radius));
	printf("Diameter of a circle = %f\n", circle_diam(radius));
	printf("Circumference of a circle = %f\n", circle_circum(radius));

	//3D examples:

	printf("\n3D test\n\n");

	printf("Area of a cube = %f\n", cube_area(side1));
	printf("Edge of a cube = %f\n", cube_edge(side1));
	printf("Diagonal of a cube = %f\n", cube_diag(side1));
	printf("Area of a cuboid = %f\n", cuboid_area(length, width, height));
	printf("Volume of a cuboid = %f\n", cuboid_vol(length, width, height));
	printf("Diagonal of a cuboid = %f\n", cuboid_diag(length, width, height));
	printf("Total area of a cilinder = %f\n", clndr_total_area(radius, height));
	printf("Curved area of a cilinder = %f\n", clndr_crvd_area(radius, height));
	printf("Base area of a cylinder = %f\n", clndr_base_area(radius));
	printf("Volume of a cylinder = %f\n", clndr_vol(radius, height));
	printf("Radius of a cylinder = %f\n", clndr_radius(height, volume));
	printf("Total surface area of a cone = %f\n", cone_total_srfc_area(radius, height));
	printf("Curved surface area of a cone = %f\n", cone_crvd_srfc_area(radius, height));
	printf("Base area of a cone = %f\n", cone_base_area(radius));
	printf("Volume of a cone = %f\n", cone_vol(radius, height));
	printf("Slant height = %f\n", slt_hgt(radius, height));
	printf("Surface area of a sphere = %f\n", sphr_srfc_area(radius));
	printf("Volume of a sphere = %f\n", sphr_vol(radius));
	printf("Diameter of a sphere = %f\n", sphr_diam(radius));

	return 0;
}