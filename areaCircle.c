//using the pow() method. But radius must be +ve integer.
#include <stdio.h>
#include <math.h>
int main(){
  int radius=0;
  printf("Enter the radius of the circle: ");
  scanf("%d",&radius);

  printf( "Area: %lf", 3.14*pow(radius, 2)); 
  return 0;
}

//to take radius as a floating point value do not use the pow() funtion, because in pow(x,y): x and y should be a positive integer.

// #include <stdio.h>
// #include <math.h>

// int main(){
//   double radius;
//   printf("Enter radius of Circle: ");
//   scanf("%lf",&radius);

//   printf("Area is: %lf",3.14*radius*radius);
//   return 0;
// }
