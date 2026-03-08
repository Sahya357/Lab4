#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Ukrainian");
	int a = 1;
	int b = 50;
	int sum = 0;
	int x = 10;
	int i = 1;
	for (int i = a; i <= b; i++) {
		if (i % 2 == 0 && i > x) {
		
			sum += i ;
		
		}
		
	}
	printf("Сумою чисел є %d\n", sum);
	
	
	while (i <= b) {
		if (a % 2 == 0 && a > x) {
		
			sum += a ;
		
		}
		i++;
	}
	printf("Сумою чисел є %d\n", sum);
	
	do {
		if (a % 2 == 0 && a > x) {
		
				sum += a;
			
		}
		i++;
	} while (i <= b);
	printf("Сумою чисел є %d\n", sum);



}