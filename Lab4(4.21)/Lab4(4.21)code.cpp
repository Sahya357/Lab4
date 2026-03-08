
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	float x = -2, y = 0;
	printf("\n********************\n");
	printf("X\t\tY\n");
	printf("********************\n");
	while (x <= 12)
	{
		y = (pow(x, 4) - 12 * x) / (x - 2);
		printf("%f\t%7.2f\n", x, y);
		x += 0.5;
	}
}

