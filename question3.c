```
#include <stdio.h>
// checks whether age is eligible to vote
int main(void) {
  int number;
 
    printf("Enter your age \n");
    scanf("%d", &number);
    if (number >= 21)
    //checks whether a number is more than or equal to 21
        printf("%d your age is eligible to vote \n", number);
    else
        printf("%d your age is ineligible to vote \n", number);
  return 0;
}
```
