//
//  geometry.c
//  SurfaceAreaCalculator
//
//  Created by Nesha Escoffery Markland on 4/9/26.
//

#include <math.h>
#include "geometry.h"

// Surface area of a right rectangular pyramid
double surfaceAreaPyramid(double l, double w, double h) {
   return l * w
        + l * sqrt((w / 2.0) * (w / 2.0) + h * h)
        + w * sqrt((l / 2.0) * (l / 2.0) + h * h);
}

// Surface area of a right circular cone
double surfaceAreaCone(double r, double h) {
   return M_PI * r * (r + sqrt(h * h + r * r));
}

// Surface area of a trapezoidal solid
double surfaceAreaTrapezoidalSolid(double a, double b, double c, double d, double h, double l) {
   return (a + b) * h + (a + b + c + d) * l;
}

// Surface area of a cylinder
double surfaceAreaCylinder(double r, double h) {
   return 2 * M_PI * r * h + 2 * M_PI * r * r;
}
