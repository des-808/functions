#pragma once


void initRand(int arr[], const int size, int  max);
void initRand(double arr[], const int size, int  max);
void initRand(float arr[], const int size, int  max);
void initRand(char arr[], const int size, int  max);
void initRand(long long arr[], const int size, int  max);
void initRand(short arr[], const int size, int  max);

void UniqueRand(int arr[], const int size, int  max);
void UniqueRand(double arr[], const int size, int  max);
void UniqueRand(float arr[], const int size, int  max);
void UniqueRand(char arr[], const int size, int  max);
void UniqueRand(long long arr[], const int size, int  max);
void UniqueRand(short arr[], const int size, int  max);

template<typename T>	T Sum(T arr[], int size);
template<typename T>	int CountNonZeroElements(T arr[], const int size);
template<typename T>	double Avg(T arr[], int size);
template<typename T>	double Avg_no_zero(T arr[], int size);
template<typename T>	T minValueIn(T arr[], int size);
template<typename T>	T maxValueIn(T arr[], int size);
template<typename T>	void cout_arr(T arr[], int size, char ch);
template<typename T>	void Cikl_Left(T arr[], int size, int L);
template<typename T>	void Cikl_Right(T arr[], int size, int R);
template<typename T>	void Sort(T arr[], int size);
template<typename T>	int compare(T arr[], const int size, T compared_value);