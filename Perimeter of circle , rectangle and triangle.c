#include<stdio.h>
#include<math.h>
void main ()
 {
   float radius, length, breadth, a, b, c, perimeter ;
   
   printf("\n Enter the radius of the circle:");
   scanf("%f", &radius);
   perimeter = 2*3.14*radius ;
   printf("\n The perimeter of the circle is %f", perimeter);
   
   printf("\n Enter the length and breadth of the rectangle:");
   scanf("%f%f", &length, &breadth);
   perimeter = 2*(length + breadth);
   printf("\n The perimeter of the rectangle is %f", perimeter );
   
   printf("\n Enter the size of all sides of the triangle ");
   scanf("%f%f%f", &a, &b, &c);
   perimeter = a + b + c ;
   printf("\n The perimeter of the triangle is %f", perimeter);
 }
  
