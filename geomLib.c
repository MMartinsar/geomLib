#include <math.h>
#include "geomLib.h"

#define PI 3.141592

//2D formulas:

//Calculates the perimeter of a square given a side.
float sqr_per(float side) {
	return 4.0 * side;
}

//Calculates the area of a square given a side.
float sqr_area(float side) {
	return side * side;
}

//Calculates the diagonal of a square given a side.
float sqr_diag(float side) {
	return side * sqrt(2);
}

//Calculates the side of a square given an area.
float sqr_side(float area) {
	return sqrt(area);
}

//Calculates the perimeter of a rectangle given a length and a width.
float rect_per(float length, float width) {
	return 2.0 * (length + width);
}

//Calculates the area of a rectangle given a length and a width.
float rect_area(float length, float width) {
	return length * width;
}

//Calculates the diagonal of a rectangle given a length and a width.
float rect_diag(float length, float width) {
	return sqrt((pow(length, 2) + pow(width, 2)));
}

//Calculates the perimeter of a parallelogram given both sides.
float prllgrm_per(float side1, float side2) {
	return 2.0 * (side1 + side2);
}

//Calculates the area of a parallelogram given a base and a height.
float prllgrm_area(float base, float height) {
	return base * height;
}

//Calculates the height of a parallelogram given an area and a base.
float prllgrm_height(float area, float base) {
	return area / base;
}

//Calculates the base of a parallelogram given an area and a height.
float prllgrm_base(float area, float height) {
	return area / height;
}

//Calculates the hypotenuse of a right triangle given a base and a height. Can also be used to find the diagonal of a rectangle.
float hypotenuse(float base, float height) {
	return sqrt((pow(base, 2) + pow(height,2)));
}

//Calculates the area of a triangle given a base and a height.
float trgl_area(float base, float height) {
	return ((1.0 / 2.0) * base * height);
}

//Calculates the perimeter of a triangle given the three sides.
float trgl_per(float side1, float side2, float side3) {
	return ((side1 + side2) + side3);
}

//Calculates the perimeter of a right triangle given a base and a height.
float rgt_trgl_per(float base, float height) {
	return base + height + sqrt(pow(base, 2) + pow(height, 2));
}

//Calculates the area of a trapezoid given two bases and a height.
float trpzd_area(float base1, float base2, float height) {

	float sum = base1 + base2;

	return ((1.0 / 2.0) * sum * (height));
}

//Calculates the length of an arc given a radius and an angle in radians.
float arc_len(float radius, float angle_radians) {
	return radius * angle_radians;
}

//Calculates the area of a circle given a radius.
float circle_area(float radius) {
	return PI * pow(radius, 2);
}

//Calculates the diameter of a circle given a radius.
float circle_diam(float radius) {
	return 2.0 * radius;
}

//Calculates the circumference of a circle given a radius.
float circle_circum(float radius) {
	return 2.0 * PI * radius;
}

//---------------------------------------------------------------------

//3D formulas:

//Calculates the area of a cube given a side.
float cube_area(float side) {
	return 6.0 * pow(side, 2);
}

//Calculates the volume of a cube given a side.
float cube_vol(float side) {
	return pow(side, 3);
}

//Calculates the edge of a cube given a side.
float cube_edge(float side) {

	float vol = pow(side, 3);

	return pow(vol, 1.0 / 3.0);
}

//Calculates the diagonal of a cube given a side.
float cube_diag(float side) {
	return side * sqrt(3);
}

//Calculates the are of a cuboid given a length, a width and a height.
float cuboid_area(float length, float width, float height) {
	
	float var1 = length * width;
	float var2 = width * height;
	float var3 = length * height;

	return 2 * (var1 + var2 + var3);
}

//Calculates the volume of a cuboid given a length, a width and a height.
float cuboid_vol(float length, float width, float height) {
	return (length * width) * height;
}

//Calculates the diagonal of a cuboid given a length, a width and a height.
float cuboid_diag(float length, float width, float height) {

	float var1 = pow(length, 2);
	float var2 = pow(width, 2);
	float var3 = pow(height, 2);

	return sqrt(var1 + var2 + var3);
}

//Calculates the total area of a cylinder given a radius and a height.
float clndr_total_area(float radius, float height) {

	float var1 = (2.0 * PI) * (radius * height);
	float var2 = (2.0 * PI) * pow(radius, 2);

	return var1 + var2;
}

//Calculates the curved area of a cylinder given a radius and a height.
float clndr_crvd_area(float radius, float height) {
	return (2.0 * PI) * (radius * height);
}

//Calculates the base area of a cylinder given a radius.
float clndr_base_area(float radius) {
	return PI * pow(radius, 2);
}

//Calculates the volume of a cylinder given a radius and a height.
float clndr_vol(float radius, float height) {
	return (PI * pow(radius, 2)) * height;
}

//Calculates the radius of a cylinder given a height and a volume.
float clndr_radius(float height, float volume) {
	
	float var1 = PI * height;

	return sqrt(volume / var1);
}

//Calculates the total surface area of a cone given a radius and a height.
float cone_total_srfc_area(float radius, float height) {
	float slhg = sqrt(pow(radius, 2) + pow(height, 2));

	return (PI * radius) * (radius + slhg);
}

//Calculates the curved surface of a cone given a radius and a height.
float cone_crvd_srfc_area(float radius, float height) {
	float slhg = sqrt(pow(radius, 2) + pow(height, 2));

	return PI * radius * slhg;
}

//Calculates the base area of a cone given a radius.
float cone_base_area(float radius) {
	return PI * pow(radius, 2);
}

//Calculates the volume of a cone given a radius and a height.
float cone_vol(float radius, float height) {
	
	float npi = (1.0 / 3.0) * PI;
	float var1 = pow(radius, 2) * height;

	return npi * var1;
}

//Calculates the slant height given a radius and a height.
float slt_hgt(float radius, float height) {
	return sqrt(pow(radius, 2) + pow(height, 2));
}

//Calculates the surface area of a sphere given a radius.
float sphr_srfc_area(float radius) {
	return 4.0 * PI * pow(radius, 2);
}

//Calculates the volume of a sphere given a radius.
float sphr_vol(float radius) {
	
	float npi = (4.0 / 3.0) * PI;

	return npi * pow(radius, 3);
}

//Calculates the diameter of a sphere given a radius.
float sphr_diam(float radius) {
	return 2.0 * radius;
}
