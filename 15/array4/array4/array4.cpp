#include <stdio.h>
#include <cstdlib>
#include <time.h>
#define size 20 //константа - розмір масиву

int main(void)
{
	int array[size] = {}; //оголошення масиву
	srand(time(NULL));
	printf("ARRAY\n"); //повідомлення про виведення масиву
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 201; //присвоєння елементу значення випадкового числа від 0 до 200
		printf("%5d\n", array[i]); //виведення елемента
	}
	//оголошення змінних для найбільшого і найменшого значень масиву і присвоєння їм значення 0-го елемента
	int max = array[0], min = array[0];
	//пошук найбільшого і найменшого значень шляхом порівняння з іншими елементами масиву
	for (int i = 1; i < size; i++) {
		if (max < array[i]) max = array[i];
		if (min > array[i]) min = array[i];
	}
	printf("the maximum value of the array: %d\n", max);
	printf("the minimum value of the array: %d\n", min);
	return 0;
}
