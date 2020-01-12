#include <stdio.h>
// this program  read 10 numbers from keyboard and finds their sum and average.

int main(void) {
  int i,n,sum=0;
	float avg;
	printf("Input 10 numbers : \n");
	for (i=1;i<=10;i++)
	{
     printf("Number-%d :",i);

		scanf("%d",&n);
		sum +=n;
	}
	avg=sum/10.0;
	printf("The sum of 10 numbers is : %d\nThe Average is : %f\n",sum,avg);
}
