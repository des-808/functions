#include<iostream>
#include<cstring>
#include<cstdio>
#include<cctype>
#include<locale>
#include<windows.h>
#include<fstream>
#include<conio.h>
#include<iomanip>
#include<ctime>
#include<stdlib.h>
#include<cstdlib>
//using namespace std;


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;
using std::_Iosb;
using std::setw;


const char probel = ' ';
// прототип фунции нужен для того что бы имя функции и список её прин парам были известны на момент вызова
void initRand(int arr[], const int size, int  max);
void UniqueRand(int arr[], const int size, int  max);
int Sum(int arr[], int size);
int CountNonZeroElements(int arr[], const int size);
double Avg(int arr[], int size);
double Avg_no_zero(int arr[], int size);
int minValueIn(int arr[], int size);
int maxValueIn(int arr[], int size);
void cout_arr(int arr[], int size, char ch);
void Cikl_Left(int arr[], int size, int L);
void Cikl_Right(int arr[], int size, int R);
void Sort(int arr[], int size);
int compare(int arr[], const int size, int compared_value);

int main() {
	setlocale(LC_ALL, "Russian"); 


	const int SIZE = 30;
	int* array = new int[SIZE];
	//int array [SIZE];
	int tmp = 0;
	srand(time(NULL));
	initRand(array, SIZE, 5);
	//UniqueRand(array, SIZE, 10);
	
	cout << "В прямом порядке   :";
	for (int i = 0; i < SIZE; i++) { cout << array[i] << probel; }cout << endl << endl;
	///////////////////////////////////
	cout << "В обратном порядке :";
	for (int i = SIZE - 1; i >= 0; i--) { cout << array[i] << probel; }cout << endl << endl;
	///////////////////////////////////
	cout << "Сумма элементов    : "<< Sum(array, SIZE) << endl << endl;
	///////////////////////////////////
	cout << "Среднее арифметическое :" << Avg(array, SIZE) << endl << endl;
	cout << "Среднее арифметическое  ненулевых значений:" << Avg_no_zero(array, SIZE) << endl << endl;
	///////////////////////////////////
	cout << "Минимальное значение массива  :" << minValueIn(array, SIZE) << endl;
	cout << "Максимальное значение массива :" << maxValueIn(array, SIZE) << endl;
	cout << endl;
	///////////////////////////////////
	//cout << "Циклический сдвиг массива в лево.\nВведите число на сколько сдвинуть :"; cin >> tmp;
	//Cikl_Left(array, SIZE, tmp); cout_arr(array, SIZE, probel); cout << endl << endl;//Вывод массива на экран
	///////////////////////////////////
	//cout << "Циклический сдвиг массива в право.\nВведите число на сколько сдвинуть :"; cin >> tmp;
	//Cikl_Right(array, SIZE, tmp); cout_arr(array, SIZE, probel); cout << endl << endl;//Вывод массива на экран
	///////////////////////////////////
	cout << "Массив, заполненный случайными числами, отсортировать в порядке возрастания" << endl;
	Sort(array, SIZE); cout_arr(array, SIZE, probel); cout << endl << endl;//Вывод массива на экран
	///////////////////////////////////
	

	
	cout << "Вывод повторяющихся значений в массиве" << endl;
	bool razr = false;
	for (int i = 0; i < SIZE; i++) {
		for (int z = i; z >= 0; z--) {//в цикле перебираем сохранённые значения
			if (z == 0) { razr = true; break; }
			if (array[z - 1] == array[i]) {//Если есть совпадение
				razr = false; break;   // Блокируем подсчёт очередного значения
			}
			razr = true; //Совпадений нет даём добро на подсчёт очередного значения
		}

		if (razr) {//Туут идёт подсчёт очередного в первый раз встретившегося значения
			int count = compare(array, SIZE, array[i]);
			if (count > 1) {
				//cout << "Значение " << setw(3) << array[i] << " Повторяется " << count << " Раз" << endl;
				printf("pначение %i встречается %i раз\n", array[i], count);
			}
			razr = false;// блокируем эту часть кода
		}
	}
	cout << endl << endl;
	delete[] array;

	system("pause");
}






void initRand(int arr[], const int size,  int  max) {
	for (int i = 0; i < size; i++) { arr[i] = rand() % max; }
}

void UniqueRand(int arr[], const int size, int  max){
	int tmp = rand() % max;
	for (int i = 0; i < size; i++) {
		for (int j = i; j >= 0; j--) {
			if (tmp == arr[j]) { tmp = rand() % max; j = i; }
		}
			arr[i] = tmp;
	}
}

int Sum(int arr[], int size) {	//возвращает сумму элементов массива
	int tmp = 0;
	for (int i = 0; i < size; i++) {
		tmp += arr[i];
	}
	return tmp;
}
int CountNonZeroElements(int arr[], const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0)count++;
	}
	return count;
}
double Avg(int arr[], int size) {	//возвращает среднее арифметическое элементов массива
	/*int count = 0;
	int tmp = 0;
	for (int i = 0; i < size; i++) {
		tmp += arr[i];
		//if (arr[i] != 0) { count++; }
	}
	return double(tmp) / size;*/
	return (double)Sum(arr, size) / size;
}

double Avg_no_zero(int arr[], int size) {	//возвращает среднее арифметическое элементов массива
	/*int count = 0;
	int tmp = 0;
	for (int i = 0; i < size; i++) {
		tmp += arr[i];
		if (arr[i] != 0) { count++; }
	}
	return double(tmp) / count;*/
	return (double)Sum(arr, size) / CountNonZeroElements(arr, size);
}

int minValueIn(int arr[], int size) {	//возвращает минимальное значение из массива
	int tmp_min = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_min > arr[i])tmp_min = arr[i];
	}
	return tmp_min;
}


int maxValueIn(int arr[], int size) {	//возвращает максимальное значение из массива
	int tmp_max = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_max < arr[i])tmp_max = arr[i];
	}
	return tmp_max;
}

void cout_arr(int arr[], int size, char ch) {
	for (int i = 0; i < size; i++) { cout << arr[i] << ch; }
}

void Cikl_Left(int arr[], int size, int L) {
	int l = 0;
	for (int i = 0; i < L; i++) {
		l = arr[0];
		for (int j = 0; j < size - 1; j++) { 
			arr[j] = arr[j + 1]; 
		} 
		arr[size - 1] = l;
	}
}
void Cikl_Right(int arr[], int size, int R) {
	int r = 0;
	for (int i = 0; i < R; i++) {
		r = arr[size - 1];
		for (int j = size - 1; j != 0; j--) {
			arr[j] = arr[j - 1];
		} 
		arr[0] = r;
	}
}

void Sort(int arr[], int size) {	//Сортирует массив в порядке возрастания
	for (int i = 0; i < size; i++) {
		for (int j = i + 1, min = 0; j < size; j++) {
			if (arr[i] > arr[j]) {
				min = arr[j];  arr[j] = arr[i]; arr[i] = min;
			}
		}
	}
}
int compare(int arr[], const int size, int compared_value) {
	int count = 0;
	for (int j = 0; j < size; j++) { if (compared_value == arr[j]) { count++; } } //{ if (arr[compared_value] == arr[j]) { count++; } }
	return count;
}