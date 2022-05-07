 #include"stdafx.h"
const char probel = ' ';
// прототип фунции нужен для того что бы имя функции и список её прин парам были известны на момент вызова
#include"func.h"

int main() {
	setlocale(LC_ALL, "Russian"); 
	const int SIZE = 10;
	int* array = new  int[SIZE];
	//double* array = new double[SIZE];
	//float* array = new float[SIZE];
	//char* array = new char[SIZE];
	//long long* array = new long long[SIZE];
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
	float tmp = (float)(rand() % max) * 100.5 / 10;//rand() % max;
	for (int i = 0; i < size; i++) {
		for (int j = i; j >= 0; j--) {
			if (tmp == arr[j]) { tmp = (float)(rand() % max) * 10 / 1.1;; j = i; }
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

template<typename T>
T Sum(T arr[], int size) {	//возвращает сумму элементов массива
	double tmp = 0;
	for (int i = 0; i < size; i++) {
		tmp += arr[i];
	}
	return tmp;
}

template<typename T>
int CountNonZeroElements(T arr[], const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0)count++;
	}
	return count;
}

template<typename T>
double Avg(T arr[], int size) {	//возвращает среднее арифметическое элементов массива
	return (double)Sum(arr, size) / size;
}

template<typename T>
double Avg_no_zero(T arr[], int size) {	//возвращает среднее арифметическое элементов массива
	return (double)Sum(arr, size) / CountNonZeroElements(arr, size);
}

template<typename T>
T minValueIn(T arr[], int size) {	//возвращает минимальное значение из массива
	T tmp_min = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_min > arr[i])tmp_min = arr[i];
	}
	return tmp_min;
}

template<typename T>
T maxValueIn(T arr[], int size) {	//возвращает максимальное значение из массива
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
