/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2;
  int sum = 0, average = 0;

  printf( "Enter Mark 1 : " );
  scanf( "%d", &mark1 );

  printf( "Enter Mark 2 : " );
  scanf( "%d", &mark2 );

  sum = mark1 + mark2;

  average = sum / 2.00;

  printf( "Average of two subject : %d", average );
  
  return 0;
}

