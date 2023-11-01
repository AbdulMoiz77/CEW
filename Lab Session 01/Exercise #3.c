#include <stdio.h>

int main() {;
   float height;
   printf("Enter Your Height in cm: \t");
   scanf("%f",&height);
   if (height < 150){
       printf("You are Dwarf");
   }
   else if (height>=150){
       printf("You are Average");
   }
   else if (height>=165){
       printf("You are Tall");
   }
   return 0;
}
