#include <stdio.h>

int main()
{
  enum gender { male, female };

  enum gender myGender;

  myGender = male;

  enum gender anotherGender = female;

  return 0;
}