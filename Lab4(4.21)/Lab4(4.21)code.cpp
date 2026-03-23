#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    float x = -2, y;
    float b = 12, dx = 0.5;

    printf("\n********************\n");
    printf("X\t\tY\n");
    printf("********************\n");

    while (x <= b)
    {
        if (fabs(x - 2) < 0.1)
        {
            printf("%f\t\tНевизначено (ділення на 0)\n", x);
        }
        else
        {
            y = (pow(x, 4) - 12 * x) / (x - 2);
            printf("%f\t%7.2f\n", x, y);
        }

        x += dx;
    }

 
}
