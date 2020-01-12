#include <stdio.h>
// this program displays the cube of the number upto given integer.

int main(void) {
  int i,ctr;
    printf("Input number of terms : ");
    scanf("%d", &ctr);
    for(i=1;i<=ctr;i++)
    {
	 printf("Number is : %d and cube of the %d is :%d \n",i,i, (i*i*i));     
    }
}
