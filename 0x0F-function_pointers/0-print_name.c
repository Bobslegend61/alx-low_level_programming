  1 #include "function_pointers.h"
  2 
  3 /**
  4   * print_name - Prints a name
  5   * @name: Name to print
  6   * @f: Function to define print format
  7   *
  8   * Return: Nothing
  9   */
 10 void print_name(char *name, void (*f)(char *))
 11 {
 12         f(name);
 13 }      
