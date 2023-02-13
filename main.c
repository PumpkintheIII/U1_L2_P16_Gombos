/*
  UB C Programming Unit 1 Lesson 2 Program 16
  Character from ASCII Chart
  Max Gombos
*/
#include <stdio.h> //import input output functions

int main(void) { //define main function
  int number; //define variable as integer

  printf("Number: "); //ask user for number
  scanf("%d", &number); //accept input and format as integer

  //print output:
  printf("Character: ");
  putchar(number);
  
  return 0;
}