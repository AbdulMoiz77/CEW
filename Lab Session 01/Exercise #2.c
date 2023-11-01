#include <stdio.h>

int main() {;
   float height,width,area,perimeter;
   printf("Enter the Height: \t");
   scanf("%f",&height);
   printf("Enter the Width : \t");
   scanf("%f",&width);
   area = height * width;
   perimeter = 2*(height + width);
   printf("Area: %.2f \nPerimeter: %.2f",area,perimeter);
   return 0;
}
