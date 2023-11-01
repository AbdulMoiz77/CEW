#include <stdio.h>
struct Distance{
    float in,ft;
    };

int main(){
    struct Distance d1,d2;
    printf("Enter the first Distance: (in Inches) \t");
    scanf("%f",&d1.in);
    printf("Enter the first Distance: (in Feets) \t");
    scanf("%f",&d1.ft);
    printf("Enter the Second Distance: (in Inches) \t");
    scanf("%f",&d2.in);
    printf("Enter the Second Distance: (in Feets) \t");
    scanf("%f",&d2.ft);
    printf("The total distance is: (in Inches)\n %.2f \n ",d1.in+d2.in);
    printf("The total distance is: (in Feets)\n %.2f ",d1.ft+d2.ft);
    return 0;
}
