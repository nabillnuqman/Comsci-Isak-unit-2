```
#include <stdio.h>
// checking the state of the temperature
int main(void) {
 int n1;
 printf("Enter temperature in centigrade: ");
 scanf("%d", &n1);
 if (n1 < 0)
// checks if temp is less than 0
  printf("it is freezing");
 else if(n1 > 0 && n1 <= 10)
// checks if temp is greater than 0 but less than 10
 printf("it is very cold weather");
 else if (n1 > 10 && n1 <= 20)
// checks if temp is greater than 10 but less than 20
 printf("it is cold weather");
 else if (n1 > 20 && n1 <= 30)
// checks if temp is greater than 20 but less than 30
 printf("it is normal temperature");
 else if (n1 > 30 && n1 <= 40)
// checks if temp is greater than 30 but less than 40
 printf("it is hot weather");
 else if (n1 >= 40)
// checks if temp is greater than 40
 printf("it is very hot");
  return 0;
}
```
