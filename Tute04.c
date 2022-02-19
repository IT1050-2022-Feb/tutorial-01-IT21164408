/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

 

int main() 
{
  int minimum(int x , int y) ; //declare functions
  int maximum(int x , int y) ; 
  int multiply(int x , int y) ;

  int no1, no2; //declare variables

  printf("Enter a value for no 1 : "); //getting user inputs
  scanf("%d", &no1);
  printf("Enter a value for no 2 : ");
  scanf("%d", &no2);

  printf("%d ", minimum(no1, no2)); //printing the output
  printf("%d ", maximum(no1, no2));
  printf("%d ", multiply(no1, no2));

  return 0;
}

int minimum(int x , int y) //function minimum begins
{
  if (x < y) //checking the minimum value
  {
    return x;
  }
  else
  {
    return y;
  }
} //end of function minmum

int maximum(int x , int y) //function maximum begins
{
  if (x > y) //checking the maximum value
  {
    return x;
  }
  else
  {
    return y;
  }
} //end of function maximum

int multiply(int x , int y) //function multiply begins
{
  return x * y;
} //end of function maximum
