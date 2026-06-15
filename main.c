//
//  main.c
//  SurfaceAreaCalculator
//
//  Created by Nesha Escoffery Markland on 4/9/26.
//

#include <stdio.h>
#include "geometry.h"

int main(void) {
   int choice;

   do {
       printf("\n=== Surface Area Calculator ===\n");
       printf("1. Right Rectangular Pyramid\n");
       printf("2. Right Circular Cone\n");
       printf("3. Trapezoidal Solid\n");
       printf("4. Right Cylinder\n");
       printf("5. Exit\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);

       if (choice == 1) {
           double l, w, h;
           printf("Enter length: ");
           scanf("%lf", &l);
           printf("Enter width: ");
           scanf("%lf", &w);
           printf("Enter height: ");
           scanf("%lf", &h);

           printf("Surface Area = %.2f\n", surfaceAreaPyramid(l, w, h));
       }
       else if (choice == 2) {
           double r, h;
           printf("Enter radius: ");
           scanf("%lf", &r);
           printf("Enter height: ");
           scanf("%lf", &h);

           printf("Surface Area = %.2f\n", surfaceAreaCone(r, h));
       }
       else if (choice == 3) {
           double a, b, c, d, h, l;
           printf("Enter a: ");
           scanf("%lf", &a);
           printf("Enter b: ");
           scanf("%lf", &b);
           printf("Enter c: ");
           scanf("%lf", &c);
           printf("Enter d: ");
           scanf("%lf", &d);
           printf("Enter height: ");
           scanf("%lf", &h);
           printf("Enter length: ");
           scanf("%lf", &l);

           printf("Surface Area = %.2f\n", surfaceAreaTrapezoidalSolid(a, b, c, d, h, l));
       }
       else if (choice == 4) {
           double r, h;
           printf("Enter radius: ");
           scanf("%lf", &r);
           printf("Enter height: ");
           scanf("%lf", &h);

           printf("Surface Area = %.2f\n", surfaceAreaCylinder(r, h));
       }
       else if (choice == 5) {
           printf("Exiting...\n");
       }
       else {
           printf("Invalid choice. Try again.\n");
       }

   } while (choice != 5);

   return 0;
}
