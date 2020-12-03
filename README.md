# 104intersection
# {EPITECH} | First year | Math project

To create synthesis images (when doing ray tracing, for example), potential intersection points between 
light rays and scene objects (here cylinders, spheres and cones) must be computed.
This is exactly what you have to do in this project.

To do so, you need to write a 3 dimensional equation of the considered surface, and inject into it the equation 
of the straight line representing the light ray.
You’ll get a quadratic equation, with 0, 1, 2 or an infinite number of solutions that will give you the intersection points coordinates.

The straight line is defined by the coordinates of a point by which it passes through and the coordinates of a parallel vector.

0 being the origin of the coordinate system, and X, Y and Z the axis, the surfaces that must be handled
in this project are:

  - 0-centered spheres,
  - Cylinders of revolution around Z axis
  - Cones of revolution around Z axis whose apex is O

See the subject for further details !

========================

## 1st semester Maths unit

Grade : B | Mark : 15.9

| Category   | Percentage | Tests | Crash ? |
|------------|------------|-------|---------|
| Rigor      | 100%       | 19/19 | x       |
| Sphere     | 100%       | 8/8   | x       |
| Cylinder   | 88.9%      | 8/9   | x       |
| Cone       | 30%         | 3/10  | x       |
| **End scores** | **82.6%**      | **38/46** | **No**      |
  
Beware of -42 Epitech students !!!
