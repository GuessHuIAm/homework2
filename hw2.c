#include <stdio.h>

int main(){
	char character = 'M';
	short shorty = 32768;
	long longy = 100000000;
	int integer = 2;
	float floaty = 10.029;
	double doubly = 3.14159999;
	printf("\tHomework #%d!\n\n", 1 + 1);
	printf("This is a character: %c\n", character);
	printf("A short, a int, and a long: %hi, %d, %ld\n", shorty, integer, longy);
	printf("The airborne bros: %0.2f, %0.9lf\n\n", floaty, doubly);
	printf("\tMixing it up!\n");
	printf("This is a character (integer): %c\n", integer);
        printf("A short (* 2), a int (double), and a long (float): %hi, %d, %ld\n", shorty * shorty, doubly, floaty);
        printf("The airborne bros: %0.2f, %0.9lf\n\n", doubly, floaty);
	printf("\tThe unsigned joins the party.\n");
	unsigned short us = 50000;
	unsigned long ul = 7000000;
	unsigned int ui = 100000;
	printf("This is a character (unsigned integer): %c\n", ui);
        printf("A short, a int, and a long: %hu, %d, %ld\n", us, ui, ul);
        printf("The airborne bros: %0.2f, %0.9lf\n\n", doubly, floaty * -1);
	return 0;
}
