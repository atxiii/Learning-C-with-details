#include <stdio.h>
#include <string.h>

int main(void)
{
  int integer = 5;
  float floatvar = 3.14;
  char string[] = "Hello, World!";

  printf("%d is an integer and size int is %d!\n", integer, sizeof(integer));
  printf("%f is a float and size %d!\n", floatvar, sizeof(floatvar));
  printf("%s is a String and size is %d!\n", string, sizeof(string));
  printf("Sizeof '%s' is: %d, but the lenght of char is: %d!\n", string, sizeof(string),strlen(string));
}