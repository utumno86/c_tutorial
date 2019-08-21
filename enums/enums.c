#include <stdio.h>

int main()
{
  enum gender { male, female };

  enum gender myGender;

  myGender = male;

  enum gender anotherGender = female;
  printf("Your gender is %d", myGender);

  return 0;
}