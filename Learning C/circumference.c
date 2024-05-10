#include <stdio.h>
#include <math.h>


int main()
{
	int radius;//The distance from the centerpoint of a circle or arc to the circumfrence or arc edge

	printf("Please enter a radius for 2D and 3D analysis => ");
	scanf("%i", &radius);//& is required to pull the address-of the operator

	printf("______________________________________________________________\n");
	printf("2D Analysis of a circle based on a user defined radius\n");
	printf("--------------------------------------------------------------\n\n");
	
	printf("the user defined radius is => %i\n", radius);

	double diameter = 2.0 * radius;
	printf("which defines a circle with a diameter of => %f\n", diameter);
	
	double circumference = 2.0 * M_PI * radius;
	printf("a circumference of => %f\n", circumference);

	double area = M_PI * (radius * radius);
	printf("and an area of => %f\n", area);

	printf("______________________________________________________________\n");
	printf("3D Analysis of a sphere based on a user defined radius\n");
	printf("--------------------------------------------------------------\n\n");

	printf("the user defined radius is => %i\n", radius);

	double volume = (4.0/3.0) * M_PI * pow(radius,3);
	printf("which defines a sphere with a volume of => %f\n", volume);

	double surface_area = 4.0 * M_PI * pow(radius,2);
	printf("and a surface area of => %f\n\n", surface_area);

	printf("______________________________________________________________\n");
	return 0;
}
