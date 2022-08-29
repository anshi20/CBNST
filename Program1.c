#include<stdlib.h>
#include<math.h>
#include<stdio.h>
int main()
{
  float true_value, approximate_value;
  printf("Enter true value : ");
  scanf("%f",&true_value);
  printf("Enter approximate value :");
  scanf("%f",&approximate_value);
  float absolute_error, relative_error, percentage_error;
  absolute_error = fabs(true_value-approximate_value);
  relative_error = absolute_error/true_value;
  percentage_error = relative_error*100;
  printf("Absolute Error : %f\n",absolute_error);
  printf("Relative Error : %f\n",relative_error);
  printf("Percentage Error : %f\n",percentage_error);
  return 0;
}
