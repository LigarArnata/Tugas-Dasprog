#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159 // Convertion Constant 

int main()
{
    /* Tugas Mandiri 1 Programming
    Nama    : Ligar Arsa Arnata
    Nrp     : 5025211244*/

    /* 1. Write a statement that asks the user to type three integers and another
    statement that stores the three user responses into first, second, and third ?*/
    
	// Variable Declaration 
    int a, b, c; 
    // Get 3 Integers 
    printf("Enter Three Integers : "); 
    scanf("%d%d%d", &a, &b, &c );
    // Display 3 Integers
    printf("Your number are : %d, %d, %d \n", a, b, c);

    /* 2. a. Write a statement that displays the following line with the value of the type int variable n before the period.
    The value of n is __ .*/
	
	// Variable Declaration 
    int n;
    // Get the Value of n 
    printf("Enter the value of n : ");
    scanf("%d", &n);
    // Display Value of n 
    printf("The Value of n is %d.\n", n);

    /*b. Assuming that side and area are type double variables containing the length of one side in cm and the area of a square in square cm,
    write a statement that will display this information in this form:
    The area of a square whose side length is __ cm is __  square cm.*/
	
	// Variable Declaration 
    double length;
    // Get the Value of Length 
    printf("Insert Length : ");
    scanf("%lf", &length);
    // Calculate Area 
    double A = length * length;
    // Display the Area 
    printf("The area of a square whose side length is %f cm is %f square cm \n", length, A);

    /* 3. Write a program that asks the user to enter the radius of a circle and then computes and displays the circle’s area. Use the formula
    Area = PI X Radius X Radius
    where PI is the constant macro 3.14159.*/

	// Variable Declaration 
    int radius;
    // Get the Value of Radius 
    printf("Insert Radius : ");
    scanf("%d", &radius);
    // Calculate Area 
    double Area = PI * radius * radius;
    // Display the Area 
    printf("Area of the circle is : %f", Area);

    return 0;
}
