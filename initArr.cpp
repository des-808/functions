#include"stdafx.h"
void initRand(int arr[], const int size, int  max) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % max;
	}
}
void initRand(double arr[], const int size, int  max) {
	for (int i = 0; i < size; i++) {
		arr[i] = (double)(rand() % max) / 100;
	}
}
void initRand(float arr[], const int size, int  max) {
	for (int i = 0; i < size; i++) {
		arr[i] = (float)(rand() % max) / 100;
	}
}
void initRand(char arr[], const int size, int  max) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % max;
	}
}
void initRand(long long arr[], const int size, int  max) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % max;
	}
}
void initRand(short arr[], const int size, int  max) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % max;
	}
}

void UniqueRand(int arr[], const int size, int  max) {
	int tmp = rand() % max;
	for (int i = 0; i < size; i++) {
		for (int j = i; j >= 0; j--) {
			if (tmp == arr[j]) { tmp = rand() % max; j = i; }
		}
		arr[i] = tmp;
	}
}
void UniqueRand(double arr[], const int size, int  max) {
	double tmp = ((rand() % max) * 100.5) / 10;// rand() % max;
	for (int i = 0; i < size; i++) {
		for (int j = i; j >= 0; j--) {
			if (tmp == arr[j]) { tmp = (double)(rand() % max) / 100; j = i; }
		}
		arr[i] = tmp;
	}
}
void UniqueRand(float arr[], const int size, int  max) {
	float tmp = float(rand() % max) * 100.5 / 10;//rand() % max;
	for (int i = 0; i < size; i++) {
		for (int j = i; j >= 0; j--) {
			if (tmp == arr[j]) { tmp = float(rand() % max) * 10 / 1.1; j = i; }
		}
		arr[i] = tmp;
	}
}
void UniqueRand(char arr[], const int size, int  max) {
	char tmp = rand() % max;//rand() % max;
	for (int i = 0; i < size; i++) {
		for (int j = i; j >= 0; j--) {
			if (tmp == arr[j]) { tmp = rand() % max; j = i; }
		}
		arr[i] = tmp;
	}
}
void UniqueRand(long long arr[], const int size, int  max) {
	long long tmp = rand() % max;//rand() % max;
	for (int i = 0; i < size; i++) {
		for (int j = i; j >= 0; j--) {
			if (tmp == arr[j]) { tmp = rand() % max; j = i; }
		}
		arr[i] = tmp;
	}
}
void UniqueRand(short arr[], const int size, int  max) {
	short tmp = rand() % max;//rand() % max;
	for (int i = 0; i < size; i++) {
		for (int j = i; j >= 0; j--) {
			if (tmp == arr[j]) { tmp = rand() % max; j = i; }
		}
		arr[i] = tmp;
	}
}