#ifndef geomLib
#define geomLib

//2D:

float sqr_per(float side);
float sqr_area(float side);
float sqr_diag(float side);
float sqr_side(float area);
float rect_per(float length, float width);
float rect_area(float length, float width);
float rect_diag(float length, float width);
float prllgrm_per(float side1, float side2);
float prllgrm_area(float base, float height);
float prllgrm_height(float area, float base);
float prllgrm_base(float area, float height);
float hypotenuse(float base, float height);
float trgl_area(float base, float height);
float trgl_per(float side1, float side2, float side3);
float rgt_trgl_per(float base, float height);
float trpzd_area(float base1, float base2, float height);
float arc_len(float radius, float angle_radians);
float circle_area(float radius);
float circle_diam(float radius);
float circle_circum(float radius);


//3D:

float cube_area(float side);
float cube_vol(float side);
float cube_edge(float side);
float cube_diag(float side);
float cuboid_area(float length, float width, float height);
float cuboid_vol(float length, float width, float height);
float cuboid_diag(float length, float width, float height);
float clndr_total_area(float radius, float height);
float clndr_crvd_area(float radius, float height);
float clndr_base_area(float radius);
float clndr_vol(float radius, float height);
float clndr_radius(float height, float volume);
float cone_total_srfc_area(float radius, float height);
float cone_crvd_srfc_area(float radius, float height);
float cone_base_area(float radius);
float cone_vol(float radius, float height);
float slt_hgt(float radius, float height);
float sphr_srfc_area(float radius);
float sphr_vol(float radius);
float sphr_diam(float radius);

#endif