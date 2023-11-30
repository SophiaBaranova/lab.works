#include <stdio.h>
#include <cstdlib>
#include <time.h>
#define size 12 //константа - розмір масиву

int main(void)
{
	int array[size]; //оголошення масиву
	srand(time(NULL));
	printf("ARRAY\n"); //повідомлення про виведення масиву
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 150; //присвоєння елементу значення випадкового числа від 0 до 149
		printf("%5d\n", array[i]); //виведення елемента
	}
	int sum = 0; //оголошення змінної для суми елементів масиву
	for (int i = 0; i < size; i++) {
		sum += array[i]; //обчислення суми
	}
	printf("sum of array elements is %d", sum); //виведення значення суми
	return 0;
}
