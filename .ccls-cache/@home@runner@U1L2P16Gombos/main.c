/*
  UB C Programming Unit 1 Lesson 2 Program 16
  Character from ASCII Chart
  Max Gombos
*/
#include <stdio.h> //import input output functions

int main(void) { //define main function
  int number; //define variable as integer

  printf("This program allows the user to input a whole number and have the program output the character associated with it on the ASCII Chart. You will get a prompt to enter your number:\n\t- Number: Enter a number here\n"); //instructions
  
  printf("Number: "); //ask user for number
  scanf("%d", &number); //accept input and format as integer

  //print output:
  printf("Character: ");
  putchar(number);
  
  return 0;
}