#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
    setlocale(LC_ALL, "Ukrainian");
    int x;
	float y;  
    int z;
    int cor = 1;
    while (cor == 1) {
	printf("Ведіть числа: ");
    scanf_s("%d  %d", &x, &z);
   
 
       
        
         if (1 - 2 * x <= 0) {
            printf("Помилка!. x додадтнього значення  ");
        }
        else if (z + 3 <= 0) {
            printf("Помилка! z відємного значення ");
        }
        else if (log10((1 - 2*x) / (z + 3) > 0)) {
             printf("Помилка! логарифм відємного значення ");
         }
        else {
			cor = 0;
        }

    }
    y = sqrt(log10((1 - 2 * x) / (double)(z + 3)));
	printf("Результат: %.3lf\n", y);

}