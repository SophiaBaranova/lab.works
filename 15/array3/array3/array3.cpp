#include <stdio.h>
#include <cstdlib>
#include <time.h>
#define size 12 //константа - розмір масиву

int main(void)
{
	int array1[size] = {}; //оголошення масиву1
	srand(time(NULL));
	printf("ARRAY 1\n"); //повідомлення про виведення масиву1
	for (int i = 0; i < size; i++) {
		array1[i] = rand() % 150; //присвоєння елементам масиву1 значення випадкового числа від 0 до 149
		printf("%7d\n", array1[i]); //виведення елементів масиву1
	}
	int array2[size] = {}; //оголошення масиву2
	printf("ARRAY 2\n"); //повідомлення про виведення масиву2
	for (int i = size - 1; i >= 0; i--) {
		array2[size - i - 1] = array1[i]; //присвоєння елементам масиву2 значень елементів масиву1 у зворотньому порядку
		printf("%7d\n", array2[size - i - 1]); //виведення елементів масиву2
	}
	return 0;
}
