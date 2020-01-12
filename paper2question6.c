#include <stdio.h>
//*Perfect number is a positive number which sum of all positive divisors excluding that number is equal to that number. For example 6 is perfect number since divisor of 6 are 1, 2 and 3.  Sum of its divisor is 1 + 2+ 3 = 6*/
// this program find the perfect numbers within a given number of range.
int main(void) {
  int n,i,sum;
  int mn,mx;
  printf("Input the starting range or number : ");
  scanf("%d",&mn);
  printf("Input the ending range of number : ");
  scanf("%d",&mx);
  printf("The Perfect numbers within the given range : ");
  for(n=mn;n<=mx;n++){
    i=1;
    sum = 0;
    while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
    }
    if(sum==n)
      printf("%d ",n);
  }
      printf("\n");
}
