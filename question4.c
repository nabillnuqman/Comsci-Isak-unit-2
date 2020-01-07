```
#include <stdio.h>
// checking the largest number given by the user
int main(void) {
 int n1, n2, n3;
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 >= n2 && n1 >= n3)
    // checks that number 1 is greater than 2 other numbers
        printf("%d is the largest number.", n1);
    if (n2 >= n1 && n2 >= n3)
    // checks that number 2 is greater than 2 other numbers
        printf("%d is the largest number.", n2);
    if (n3 >= n1 && n3 >= n2)
    // checks that number 3 is greater than 2 other numbers
        printf("%d is the largest number.", n3);

  return 0;
}
```
