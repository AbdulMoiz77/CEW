#include <stdio.h>

int main() {
   int id,hours_worked;
   float pay_rate,salary;
   printf("Enter Your Employee Id: \t");
   scanf("%d",&id);
   printf("Enter Hours Worked in a month : \t");
   scanf("%d",&hours_worked);
   printf("Enter Amount Received/ Hour : \t");
   scanf("%f",&pay_rate);
   salary = hours_worked*pay_rate;
   printf("Employee ID: %d \nSalary: %.2f",id,salary);

    return 0;
}
