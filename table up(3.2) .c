/*
WAP to print table up to given numbers 
*/

#include <stdio.h>

int main() {
   int i, j, n;
	printf("Enter the number :");
	scanf("%d",&n);
   n = n;
   j = 1;
   
   for(i = n; i <= (n*10); i += n) {
      printf("%3d  x %2d  =  %3d\n", n, j, i);
      j++;
   }

   return 0;
}
