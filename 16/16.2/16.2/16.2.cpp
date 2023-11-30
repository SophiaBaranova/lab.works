﻿#include <stdio.h>
#include <cstdlib> //для srand(), rand()
#include <time.h> //для time()
#define n 5 //константа - розмір масиву

int main()
{
	float a[n][n]; //оголошення двовимірного масиву n х n
	long float p = 1; //змінна для збереження добутку позитивних елементів
	printf("%28s\n", "the elements of array"); //повідомлення про виведення масиву
	srand(time(NULL)); //точка відліку для rand() - поточний час (для отримання різних генерацій під час різних запусків)
	//цикл для всіх елементів масиву
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//генерація випадкового дійсного числа в діапазоні від -20 до 20 (з 2-а знаками після коми)
			a[i][j] = (rand() % 40 - 20) + (rand() % 100) / 100.;
			printf("%7.2f", a[i][j]); //виведення елемента
		}
		printf("\n");
	}
	//цикл для всіх елементів масиву
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//якщо значення позитивне, добуток = добуток * значення
			if (a[i][j] > 0) p *= a[i][j];
		}
	}
	//виведення результату
	printf("the product of the positive elements is %.4lf", p);
	return 0;
}
