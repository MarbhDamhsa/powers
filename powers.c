 /*                         powers
     *                           by Jay Mendelsohn
     *                              September 29, 2016
     *
     *
     *   Program Assignment: P01
     *   Due Date:   October 2, 2016
     *
     *   Program will take a two integers from user input
     *   and display the first five powers for each integer
     *   between the first and second. Output will be 
     *   formatted into five columns with right justification.
     */

#include <stdio.h>

int main(void)
{
     int a, b;
     printf("Welcome to powers\n\n\n");

     printf("This program will take a range of integers ");
     printf("and display the first five powers of each number ");
     printf("organized into five columns.\n\n");

     printf("Please enter the beginning integer: ");
     scanf("%d", &a);

     printf("Please enter the ending integer: ");
     scanf("%d", &b);
     printf("\n\n");
     //         7     5     6     7       9      4     9       8         9
     printf("Integer     Square       3rd Power    4th Power        5th Power\n");
     printf("-------     ------       ---------    ---------        ---------\n");
     for (;a <= b;)
     {
          printf("%7d     %6d       %9d    %9d        %9d\n", a, (a * a), (a * a * a), (a * a * a * a), (a * a * a * a * a));
          a++;

     }

     printf("\n\nThank you for using powers. Bye!\n");

     getchar();
     getchar();
     return 0;
}
