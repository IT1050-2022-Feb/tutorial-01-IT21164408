/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float m1,m2,avg; //declare variables

  printf("Enter mark 1 : "); //getting user inputs
  scanf("%f", &m1);
  printf("Enter mark 2 : ");
  scanf("%f", &m2);

  avg = (m1 + m2) / 2.0; //calculating the average

  printf("Average mark : %.2f", avg); //printing the average mark
  
  return 0;
}

