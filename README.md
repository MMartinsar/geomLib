# geomLib

This simple C library contains functions for some geometry formulas as the area of a trapezoid or circumference of a circle. This library works with float elements as, having multiplications and division, the output might have decimals.

The functions are divided into 2D figures formulas and 3D ones.


## 2D

- **sqr_per:**

Calculates the perimeter of a square given a side.
```
sqr_per(float side)
```

---

- **sqr_area:**

Calculates the area of a square given a side.
```
sqr_area(float side)
```

---

- **sqr_diag:**

Calculates the diagonal of a square given a side.
```
sqr_diag(float side)
```

---

- **sqr_side:**

Calculates the side of a square given a side.
```
sqr_side(float side)
```

---

- **rect_per:**

Calculates the perimeter of a rectangle given a length and a width.
```
rect_per(float length, float width)
```

---

- **rect_area:**

Calculates the area of a rectangle given a length and a width.
```
rect_area(float length, float width)
```

---

- **rect_diag:**

Calculates the diagonal of a rectangle given a length and a width.
```
rect_diag(float length, float width)
```

---

- **prllgrm_per:**

Calculates the perimeter of a parallelogram given two sides.
```
prllgrm_per(float side1, float side2)
```

---

- **prllgrm_area:**

Calculates the area of a parallelogram given a base and a height.
```
prllgrm_area(float base, float height)
```

---

- **prllgrm_height:**

Calculates the height of a parallelogram given an area and a base.
```
prllgrm_height(float area, float base)
```

---

- **prllgrm_base:**

Calculates the height of a parallelogram given an area and a height.
```
prllgrm_base(float area, float height)
```

---

- **hypotenuse:**

Calculates the hypotenuse given a base and a height.
```
hypotenuse(float base, float height)
```

---

- **trgl_area:**

Calculates the area of a triangle given a base and a height.
```
trgl_area(float base, float height)
```

---

- **trgl_per:**

Calculates the perimeter of a triangle given three sides.
```
trgl_per(float side1, float side2, float side3)
```

---

- **rgt_trgl_per:**

Calculates the perimeter of a right triangle given a base and a height.
```
rgt_trgl_per(float base, float height)
```

---

- **trpzd_area:**

Calculates the area of a trapezoid given two bases and a height.
```
trpzd_area(float base1, float base2, float height)
```

---

- **arc_len:**

Calculates the length of an arc given a radius and an angle in radians.
```
arc_len(float radius, float angle_radians)
```

---

- **circle_area:**

Calculates the area of a circle given a radius.
```
circle_area(float radius)
```

---

- **circle_diam:**

Calculates the diameter of a circle given a radius.
```
circle_diam(float radius)
```

---

- **circle_circum:**

Calculates the circumference of a circle given a radius.
```
circle_circum(float radius)
```

---
<br/>

## 3D

- **cube_area:**

Calculates the area of a cube given a side.
```
cube_area(float side)
```

---

- **cube_vol:**

Calculates the volume of a cube given a side.
```
cube_vol(float side)
```

---

- **cube_edge:**

Calculates the edge of a cube given a side.
```
cube_edge(float side)
```

---

- **cube_diag:**

Calculates the diagonal of a cube given a side.
```
cube_diag(float side)
```

---

- **cuboid_area:**

Calculates the area of a cuboid given a length, a width and a height.
```
cuboid_area(float length, float width, float height)
```

---

- **cuboid_vol:**

Calculates the volume of a cuboid given a length, a width and a height.
```
cuboid_vol(float length, float width, float height)
```

---

- **cuboid_diag:**

Calculates the diagonal of a cuboid given a length, a width and a height.
```
cuboid_diag(float length, float width, float height)
```

---

- **clndr_total_area:**

Calculates the total area of a cylinder given a radius and a height.
```
clndr_total_area(float radius, float height)
```

---

- **clndr_crvd_area:**

Calculates the curved area of a cylinder given a radius and a height.
```
clndr_crvd_area(float radius, float height)
```

---

- **clndr_base_area:**

Calculates the base area of a cylinder given a radius.
```
clndr_base_area(float radius)
```

---

- **clndr_vol:**

Calculates the volume of a cylinder given a radius and a height.
```
clndr_vol(float radius, float height)
```

---

- **clndr_radius:**

Calculates the radius of a cylinder given a height and a volume.
```
clndr_radius(float height, float volume)
```

---

- **cone_total_srfc_area:**

Calculates the total surface area of a cone given a radius and a height.
```
cone_total_srfc_area(float radius, float height)
```

---

- **cone_crvd_srfc_area:**

Calculates the curved surface area of a cone given a radius and a height.
```
cone_crvd_srfc_area(float radius, float height)
```

---

- **cone_base_area:**

Calculates the base area of a cone given a radius.
```
cone_base_area(float radius)
```

---

- **cone_vol:**

Calculates the volume a cone given a radius and a height.
```
cone_vol(float radius, float height)
```

---

- **slt_hgt:**

Calculates the slant height given a radius and a height.
```
slt_hgt(float radius, float height)
```

---

- **sphr_srfc_area:**

Calculates the surface area of a sphere given a radius.
```
sphr_srfc_area(float radius)
```

---

- **sphr_vol:**

Calculates the volume of a sphere given a radius.
```
sphr_vol(float radius)
```

---

- **sphr_diam:**

Calculates the diameter of a sphere given a radius.
```
sphr_diam(float radius)
```
