#include <iostream>
#define n 6
#define m 4

void snake(int a, int b) //функція виведення змійки
{
	for (int i = 0; i < a - 1; i++) {
		for (int j = 0; j < b; j++) {
			printf(" -");
		}
		if (i % 2 == 0) {
			printf("\n");
			for (int k = 0; k < b * 2; k++) printf(" ");
			printf("|\n");
		}
		else {
			printf("\n|\n");
		}
	}
	if (a % 2 == 0) {
		printf("<");
		for (int j = 0; j < b; j++) printf("- ");
	}
	else {
		for (int j = 0; j < b; j++) printf(" -");
		printf(">");
	}
	printf("\n");
}

int main()
{
	setlocale(LC_ALL, "ukr");
	int a[n][m]; //оголошення масиву
	printf("заповнення матрицi %d x %d змiйкою\n", n, m); //повідомлення про заповнення матриці змійкою
	//виведення "змійки" для більшої наочності
	snake(n, m);
	//цикл для всіх елементів масиву
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) { //якщо парний рядок (починаючи з 0-го)
			for (int j = 0; j < m; j++) { //введення елементів зліва направо
				printf("елемент [%d][%d]: ", i, j);
				scanf_s("%d", &a[i][j]);
			}
		}
		else { //якщо непарний рядок
			for (int j = m - 1; j >= 0; j--) { //ввведення елементів справа наліво
				printf("елемент [%d][%d]: ", i, j);
				scanf_s("%d", &a[i][j]);
			}
		}
	}
	printf("%16s\n", "РЕЗУЛЬТАТ"); //повідомлення про виведення результату
	//цикл для всіх елементів масиву
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%5d ", a[i][j]); //виведення елемента
		}
		printf("\n");
	}
	return 0;
}
