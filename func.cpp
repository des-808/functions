#include"stdafx.h"


template<typename T>T Sum(T arr[], int size) {	//возвращает сумму элементов массива
	double tmp = 0;
	for (int i = 0; i < size; i++) {
		tmp += arr[i];
	}
	return tmp;
}
template<typename T>int CountNonZeroElements(T arr[], const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0)count++;
	}
	return count;
}
template<typename T>double Avg(T arr[], int size) {	//возвращает среднее арифметическое элементов массива
	return (double)Sum(arr, size) / size;
}
template<typename T>double Avg_no_zero(T arr[], int size) {	//возвращает среднее арифметическое элементов массива
	return (double)Sum(arr, size) / CountNonZeroElements(arr, size);
}
template<typename T>T minValueIn(T arr[], int size) {	//возвращает минимальное значение из массива
	T tmp_min = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_min > arr[i])tmp_min = arr[i];
	}
	return tmp_min;
}
template<typename T>T maxValueIn(T arr[], int size) {	//возвращает максимальное значение из массива
	T tmp_max = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_max < arr[i])tmp_max = arr[i];
	}
	return tmp_max;
}

template<typename T>
void cout_arr(T arr[], int size, char ch) {
	for (int i = 0; i < size; i++) { cout << arr[i] << ch; }
}

template<typename T>
void Cikl_Left(T arr[], int size, int L) {
	T l = 0;
	for (int i = 0; i < L; i++) {
		l = arr[0];
		for (int j = 0; j < size - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[size - 1] = l;
	}
}

template<typename T>
void Cikl_Right(T arr[], int size, int R) {
	T r = 0;
	for (int i = 0; i < R; i++) {
		r = arr[size - 1];
		for (int j = size - 1; j != 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = r;
	}
}


template<typename T>
void Sort(T arr[], int size) {	//Сортирует массив в порядке возрастания
	T min = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				min = arr[j];  arr[j] = arr[i]; arr[i] = min;
			}
		}
	}
}

template<typename T>
int compare(T arr[], const int size, T compared_value) {
	int count = 0;
	for (int j = 0; j < size; j++) { if (compared_value == arr[j]) { count++; } } //{ if (arr[compared_value] == arr[j]) { count++; } }
	return count;
}
