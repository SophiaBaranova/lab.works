#include <stdio.h>
#include <math.h> //для fabs()
#define n 10

int main()
{
	int array[n]; //оголошення масиву
	printf("enter the element of array and click <enter>\n"); //запрошення ввести елементи масиву
	//ітерація через масив з використанням покажчиків
	for (int *ptr = array; ptr < array + n; ptr++) {
		scanf_s("%d", ptr); //зчитування введеного значення у відповідний елемент масиву
	}
	int *max = array, *min = array; //оголошення покажчиків max і min на 1-й елемент масиву
	//ітерація через масив з використанням покажчиків
	for (int *ptr = array; ptr < array + n; ptr++) {
		if (*max < *ptr) { //якщо значення за адресою max менше, ніж значення елемента масиву за адресою ptr
			max = ptr; //присвоєння покажчику max адреси відповідного елемента
		}
		if (*min > *ptr) { // якщо значення за адресою min більше, ніж значення елемента масиву за адресою ptr
			min = ptr; //присвоєння покажчику min адреси відповідного елемента
		}
	}
	int d = int(fabs(max - min)); //обчислення відстані між максимальним і мінімальним елементами
	printf("maximum: %d, minimum: %d\ndistance: %d", *max, *min, d); //виведення результату
	return 0;
}
