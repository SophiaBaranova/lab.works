#include <stdio.h>
#include <cstdlib>
#include <time.h>
#define size 12 //константа - розмір масиву

int main(void) {
	int array[size]; //оголошення масиву
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100; //заповнення масиву рандомними числами від 0 до 99
	}
	//виведення масиву
	printf("%14s\n", "initial array");
	printf("%s%7s\n", "element", "value");
	for (int i = 0; i < size; i++) {
		printf("%7u%7d\n", i, array[i]);
	}
	//повідомлення про заміну парних елементів масиву нулями
	printf("all even elements -> 0\n%14s\n", "new array");
	//заміна парних елементів масиву нулями
	for (int i = 0; i < size; i++) {
		if (array[i] % 2 == 0) array[i] = 0;
	}
	//виведення нового масиву
	printf("%s%7s\n", "element", "value");
	for (int i = 0; i < size; i++) {
		printf("%7u%7d\n", i, array[i]);
	}
	return 0;
}
