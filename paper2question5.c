#include <stdio.h>
// this program  finds the sum of the series 1 +11 + 111 + 1111 + .. n terms.

int main(void) {
  int n,i; 
  long sum=0;
  long int t=1;
  printf("Input the number of terms : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("%ld  ",t);
      if (i<n)
      {
          printf("+ "); 
          
      }
     sum=sum+t;
     t=(t*10)+1;
  }
  printf("\nThe Sum is : %ld\n",sum);
}
