#include <stdio.h>
// this program  displays the n terms of harmonic series and their sum.  1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

int main(void) {
 int i,n;
   float s=0.0;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   printf("\n\n");
   for(i=1;i<=n;i++)
   {
       if(i<n)
       {
     printf("1/%d + ",i);
     s+=1/(float)i;
       }
     if(i==n)
     {
     printf("1/%d ",i);
     s+=1/(float)i;
     }
     }
        printf("\nSum of Series upto %d terms : %f \n",n,s);
}
