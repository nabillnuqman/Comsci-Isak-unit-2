#include <stdio.h>

int main(void) {
 int int1, int2;
 
    printf("Input 2 Values : ");
    scanf("%d %d", &int1, &int2);
    if (int1 == int2)
        printf("Number 1 and Number 2 are equal\n");
    else
        printf("Number 1 and Number 2 are not equal\n");
  return 0;
}
