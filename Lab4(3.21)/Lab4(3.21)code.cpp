#include <stdio.h>
#include <locale>
int main() {
	setlocale(LC_ALL, "Ukrainian");
    int n ,x,j,i,s,p = 0;

    printf("Введіть n і x: ");
    scanf_s("%d %d", &n, &x);

    if (x == 0) {
        printf("Помилка: ділення на нуль!\n");
       
    }

    for (int i = 1; i <= n; i++) {
        
        for (s = 1, j = 1; j <= i; j++) {
            s *= (i + j) / x;
        }
        p += s;
    }

    printf("Результат  = %d\n", p);

    return 0;
}
