#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Ukrainian");
	int a = 1;
	int b = 50;
	int sum = 0;
	/*
	for (int i = a; i < b; i++) {
		if (i % 2 == 0) {
			sum += i ;
		}
		
	}
	printf("Сумою чисел є %d\n", sum);
	*/
	/*
	while (a < b) {
				if (a % 2 == 0) {
			sum += a ;
		}
				a++;
	}
	printf("Сумою чисел є %d\n", sum);
	*/
	do {
		if (a % 2 == 0) {
			sum += a ;
		}
				a++;
	} while (a < b);
	printf("Сумою чисел є %d\n", sum);



}