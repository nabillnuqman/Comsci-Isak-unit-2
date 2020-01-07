```
#include <stdio.h>
// checking the quadrant the coordinate given by the user lies in
int main(void) {
 int co1,co2;
	printf("Input the values for X and Y coordinate : ");
	scanf("%d %d",&co1,&co2);
  if( co1 > 0 && co2 > 0)
  // checks if both coordinates are greater than 0
   printf("The coordinate point (%d,%d) lies in the First quandrant.\n",co1,co2);
   else if( co1 < 0 && co2 > 0)
   // checks if coordinate 1 is less than 0 and coordinate 2 is greater than 0
   printf("The coordinate point (%d,%d) lies in the Second quandrant.\n",co1,co2);
   else if( co1 < 0 && co2 < 0)
   // checks if both coordinates are less than 0
   printf("The coordinate point (%d,%d) lies in the Third quandrant.\n",co1,co2);
   else if ( co1 > 0 && co2 < 0)
   // checks if coordinate 1 is greater than 0 and coordinate 2 is greater than 0
   printf("The coordinate point (%d,%d) lies in the Fourth quandrant.\n",co1,co2);
  return 0;
}
```
http://www.montereyinstitute.org/courses/DevelopmentalMath/COURSE_TEXT2_RESOURCE/U13_L1_T1_text_final.html
