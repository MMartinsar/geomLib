#ifndef geomLib
#define geomLib

float sqr_per(float side);
float rect_per(float length, float width);
float sqr_area(float side);
float rect_area(float length, float width);
float trgl_area(float base, float height);
float trpzd_area(float base1, float base2, float height);
float circle_area(float radius);
float circle_diam(float radius);
float circle_circum(float radius);

#endif