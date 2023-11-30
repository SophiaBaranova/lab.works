#include <stdio.h>

int main(void)
{
	int go = 1;
	while (go == 1) {
		float a, b; //оголошення змінних
		printf("enter two numbers: "); //запрошення ввести 2 числа
		scanf_s("%f%f", &a, &b);
		if (a > b) printf("%.3f\n", a); //якщо 1-е число більше за 2-е, вивести 1-е
		else printf("%.3f\t%.3f\n", a, b); //інакше вивести обидва
		printf("continue - 1, stop - 0 -> ");
		scanf_s("%d", &go);
	}
	return 0;
}