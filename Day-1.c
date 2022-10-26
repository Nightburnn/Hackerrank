#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

//Declared by Hackerrank
int main() {

    int i = 4;

    double d = 4.0;

    char s[] = "HackerRank ";
    

    // Declare second integer, double, and String variables.

     int a = 12;

     double b = 4.0;

     char src[] = "is the best place to learn and practice coding!";

    // Read and save an integer, double, and String to your variables.

    

    // Print the sum of both integer variables on a new line.

      printf("%d\n", a + i);

    // Print the sum of the double variables on a new line.

      printf("%.1lf\n", b + d);

    // Concatenate and print the String variables on a new line

    // The 's' variable above should be printed first.
   /**
    * there are so many ways to concatenate, we can copy and add them together
    * which is strcpy function in the string.h header 
    * or  strcat(s, src); also a function in string.h
    */

    printf("%s%s",s, src);

     

    return 0;
