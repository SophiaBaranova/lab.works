#include <stdio.h>

int main(void)
{
	int go = 1;
	while (go == 1) {
		float a, b, c; //оголошення змінних
		printf("enter three numbers: "); //запрошення ввести 3 числа
		scanf_s("%f%f%f", &a, &b, &c);
		printf("the smallest number ->"); //повідомлення про виведення найменшого числа
		if (a > b) { 
			if (b > c) printf("\t%.4f\n", c);
			else printf("\t%.4f\n", b); //якщо b <= c
		}
		else if (a < b) {
			if (a > c) printf("\t%.4f\n", c);
			else printf("\t%.4f\n", a); //якщо a <= c
		}
		else if (a == b) {
			if (a > c) printf("\t%.4f\n", c);
			else printf("\t%.4f\n", a); //якщо a = b = c або a = b < c
		}
		printf("continue - 1, stop - 0 -> ");
		scanf_s("%d", &go);
	}
	return 0;
}
