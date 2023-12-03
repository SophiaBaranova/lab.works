#include <stdio.h>
#define n 15

int main()
{
	int array[n]; //оголошення масиву
	printf("enter the element of array and click <enter>\n"); //запрошення ввести елементи масиву
	//ітерація через масив з використанням покажчиків
	for (int *ptr = array; ptr < array + n; ptr++) {
		scanf_s("%d", ptr); //зчитування введеного значення у відповідний елемент масиву
	}
	int sum = 0; //оголошення змінної для суми елементів масиву
	int *s = &sum; //оголошення покажчика на змінну sum
	//ітерація через масив з використанням покажчиків
	for (int *ptr = array; ptr < array + n; ptr++) {
		*s += *ptr; //додавання до змінної sum значення елемента масиву
	}
	float aver = *s / static_cast<float>(n); //обчислення середнього значення елементів масиву
	printf("the average of array elements is %.2f", aver); //виведення результату
	return 0;
}
