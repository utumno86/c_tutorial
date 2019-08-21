#include <stdio.h>

int main(int argc, char *argv[])
{
  char *arg1 = argv[1];
  char *arg2 = argv[2];
  double width;
  double heigth;

  sscanf(arg1, "%lf", &width);
  sscanf(arg2, "%lf", &heigth);

  double area = width * heigth;
  double perimeter = 2 * (width + heigth);

  printf("The width of your rectangle is %f \n", width);
  printf("The heigth of your rectangle is %f \n", heigth);
  printf("The area of your rectangle is %f \n", area);
  printf("The perimeter of your rectangle is %f \n", perimeter);


  return 0;
}