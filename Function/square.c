#include <stdio.h>

#define PI 3.14

double square_area(double side);
double rectangle_area(double length, double width);
double circle_area(double redius);

void demo_square()
{

	printf("%lf\n", square_area(6.00));
	printf("%lf\n", rectangle_area(2.00, 3.00));
	printf("%lf\n", circle_area(4.0));


	return 0;
}

double square_area(double side) {
	return side * side;
}
double rectangle_area(double length, double width) {
	return length * width;
}
double circle_area(double redius) {
	return redius * redius * PI;
}