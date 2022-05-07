#include"stdafx.h"


void Sort(int arr[], int size) {	//Сортирует массив в порядке возрастания
	int min = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				min = arr[j];  arr[j] = arr[i]; arr[i] = min;
			}
		}
	}
}
void Sort(double arr[], int size) {	//Сортирует массив в порядке возрастания
	for (int i = 0; i < size; i++) {
		double min = 0.0;
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				min = arr[j];  arr[j] = arr[i]; arr[i] = min;
			}
		}
	}
}
void Sort(float arr[], int size) {	//Сортирует массив в порядке возрастания
	for (int i = 0; i < size; i++) {
		float min = 0.0;
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				min = arr[j]; arr[j] = arr[i]; arr[i] = min;
			}
		}
	}
}
void Sort(char arr[], int size) {	//Сортирует массив в порядке возрастания
	for (int i = 0; i < size; i++) {
		char min = 0;
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				min = arr[j]; arr[j] = arr[i]; arr[i] = min;
			}
		}
	}
}
void Sort(long long arr[], int size) {	//Сортирует массив в порядке возрастания
	for (int i = 0; i < size; i++) {
		long long min = 0;
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				min = arr[j]; arr[j] = arr[i]; arr[i] = min;
			}
		}
	}
}
void Sort(short arr[], int size) {	//Сортирует массив в порядке возрастания
	for (int i = 0; i < size; i++) {
		short min = 0;
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				min = arr[j]; arr[j] = arr[i]; arr[i] = min;
			}
		}
	}
}

int compare(int arr[], const int size, int compared_value) {
	int count = 0;
	for (int j = 0; j < size; j++) { if (compared_value == arr[j]) { count++; } } //{ if (arr[compared_value] == arr[j]) { count++; } }
	return count;
}
int compare(double arr[], const int size, double compared_value) {
	int count = 0;
	for (int j = 0; j < size; j++) { if (compared_value == arr[j]) { count++; } } //{ if (arr[compared_value] == arr[j]) { count++; } }
	return count;
}
int compare(float arr[], const int size, float compared_value) {
	int count = 0;
	for (int j = 0; j < size; j++) { if (compared_value == arr[j]) { count++; } } //{ if (arr[compared_value] == arr[j]) { count++; } }
	return count;
}
int compare(char arr[], const int size, char compared_value) {
	int count = 0;
	for (int j = 0; j < size; j++) { if (compared_value == arr[j]) { count++; } } //{ if (arr[compared_value] == arr[j]) { count++; } }
	return count;
}
int compare(long long arr[], const int size, long long compared_value) {
	int count = 0;
	for (int j = 0; j < size; j++) { if (compared_value == arr[j]) { count++; } } //{ if (arr[compared_value] == arr[j]) { count++; } }
	return count;
}
int compare(short arr[], const int size, short compared_value) {
	int count = 0;
	for (int j = 0; j < size; j++) { if (compared_value == arr[j]) { count++; } } //{ if (arr[compared_value] == arr[j]) { count++; } }
	return count;
}