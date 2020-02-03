// Benjamin Lincourt
// 1/22/2020
// PE2
#include <stdio.h>

int main()
{
	//print hello world
	printf("Hello world \n");

	//calculate the required values
	int secondsInDecember = 60 * 60 * 24 * 31;
	double areaOfCircle = (6.2 * 6.2) * 3.14159;
	int divisionInt = 20 / 9;
	double divisionDouble = 20 / 11;

	//print out the calculated values
	printf("The number of seconds in December is %i \n", secondsInDecember);
	printf("The area of a circle with radius 6.2 is %f \n", areaOfCircle);
	printf("Integer division (20/9) as an Int would be %i \n", divisionInt);
	printf("Integer division (20/11) as a Double would be %f \n", divisionDouble);
	printf("Integer division truncates the number to the nearest lower integer. \n");
}