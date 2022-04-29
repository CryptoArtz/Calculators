#include <stdio.h>
#include <stdlib.h>

int main(){

  // Beginning
  printf("===========================\n");
  printf("======Calculator in C======\n");
  printf("=========By Crypto=========\n");

  // Declaring the variables
  int num1, num2, soma, sub, multi, div;

  // Asking the user to enter the numbers
  printf("Number 1:");
  scanf("%i", &num1);
  printf("Number 2:");
  scanf("%i", &num2);

  // Performing calculations and printing on the screen
  soma = num1 + num2;
  printf("Sum result: %i\n", soma);
  sub = num2 - num1;
  printf("Subtraction result: %i\n", sub);
  multi = num1 * num2;
  printf("Multiplication result: %i\n", multi);
  div = num1 / num2;
  printf("Division result: %i\n", div);

  // End of the code
  return 0;
}