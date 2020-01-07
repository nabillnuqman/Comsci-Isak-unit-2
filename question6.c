````
#include <stdio.h>
// checking if the student is eligible for a course
int main(void) {
 int n1, n2, n3;
 printf("Enter scores in Math, Physics and Chem: ");
 scanf("%d %d %d", &n1, &n2, &n3);
 if (n1 >= 65 && n2 >= 55 && n3 >= 50)
// checks if scores reach the minimum
  printf("student is eligible for admission");
 else if (n1 + n2 + n3 >= 180)
// checks if total scores reach the minimum
 printf("student is eligible for admission");
 else if (n1 + n2 >= 140)
// checks if math and physics reach the minimum
 printf("student is eligible for admission");
  return 0;
}
