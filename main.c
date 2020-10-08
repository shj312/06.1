#include <stdio.h>
 
 int sumTwo(int a, int b)
 {
 	return (a+b);
 }
 
 int square(int n)
 {
 	return (n*n);
 }
 
 int getMax(int x, int y)
 {
 	if (x>y)
	  return x;
	else
	  return y;
 }
 
 int main(int argc, char *argv[]) {
 	
 	printf("sumTwo : %i \n", sumTwo(1,2));
 	printf("square : %i \n", square(5));
 	printf("getMax : %i \n", getMax(10,8));
 	
 	return 0;
 }

