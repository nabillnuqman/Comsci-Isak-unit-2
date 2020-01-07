#include <stdio.h>
//This program checks whether a number is positive or negative
int main(void) {
  int number;
 
    printf("Enter a number \n");
    scanf("%d", &number);
    if (number >= 0)
    //checks whether a number is more than or equal to zero
        printf("%d is a positive number \n", number);
    else
        printf("%d is a negative number \n", number);
  return 0;
}
