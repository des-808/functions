#include "stdafx.h"

const char probel = ' ';
// прототип фунции нужен для того что бы имя функции и список её прин парам были известны на момент вызова
#include "initRand.h"
#include "statistics.h"
#include "shift.h"
#include "print.h"
#include "sort.h"

#include "initRand.cpp"
#include "statistics.cpp"
#include "shift.cpp"
#include "print.cpp"
#include "sort.cpp"


int main() {
	setlocale(LC_ALL, "Russian"); 
	const int SIZE = 10;
	//int* array = new  int[SIZE];
	//double* array = new double[SIZE];
	//float* array = new float[SIZE];
	//char* array = new char[SIZE];
	long long* array = new long long[SIZE];
	//short* array = new short[SIZE];

	//int array [SIZE];
	int tmp = 0;
	//srand(time(NULL));
	initRand(array, SIZE, 10000); 
	//UniqueRand(array, SIZE, 10000);
	
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
	cout << "Циклический сдвиг массива в лево.\nВведите число на сколько сдвинуть :"; cin >> tmp;
	Cikl_Left(array, SIZE, tmp); cout_arr(array, SIZE, probel); cout << endl << endl;//Вывод массива на экран
	///////////////////////////////////
	cout << "Циклический сдвиг массива в право.\nВведите число на сколько сдвинуть :"; cin >> tmp;
	Cikl_Right(array, SIZE, tmp); cout_arr(array, SIZE, probel); cout << endl << endl;//Вывод массива на экран
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
				cout << "Значение " << setw(3) << array[i] << " Повторяется " << count << " Раз" << endl;
				//printf("pначение %i встречается %i раз\n", array[i], count);
			}
			razr = false;// блокируем эту часть кода
		}
	}
	cout << endl << endl;
	delete[] array;

	system("pause");
}











