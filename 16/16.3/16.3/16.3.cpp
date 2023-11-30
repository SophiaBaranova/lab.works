#include <stdio.h>
#include <cstdlib> //для srand(), rand()
#include <time.h> //для time()
#define n 3
#define m 4

int main()
{
	int a[n][m], b[m][n], bt[n][m], c[n][m]; //оголошення масивів
	printf("%12s\n", "matrix a"); //повідомлення про виведення матриці а
	srand(time(NULL));
	//цикл для всіх елементів матриці а
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = rand() % 26; //генерація випадкового числа від 0 до 25
			printf("%3d ", a[i][j]); //виведення елемента
		}
		printf("\n");
	}
	printf("matrix b (enter integers from the range [-99;99])\n"); //запрошення ввести елементи матриці b
	//цикл для всіх елементів матриці b
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("b[%d][%d] = ",i,j); //введення елемента
			scanf_s("%d", &b[i][j]); //зчитування
		}
	}
	printf("%12s\n", "matrix bt"); //повідомлення про виведення матриці bt
	//цикл для всіх елементів матриці bt
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			bt[i][j] = b[j][i]; //присвоєння елементу матриці с значення елемента матриці b із взаємнозаміненими індексами
			printf("%3d ", bt[i][j]); //виведення елемента
		}
		printf("\n");
	}
	printf("matrix c = a + bt\n"); //повідомлення про виведення матриці с
	//цикл для всіх елементів матриці с
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			c[i][j] = a[i][j] + bt[i][j]; //обчислення значення елемента
			printf("%3d ", c[i][j]); //виведення елемента
		}
		printf("\n");
	}
	return 0;
}
