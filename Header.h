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

int Sum(int arr[], int size);
double Sum(double arr[], int size);
float Sum(float arr[], int size);
char Sum(char arr[], int size);
long long Sum(long long arr[], int size);
short Sum(short arr[], int size);


int CountNonZeroElements(int arr[], const int size);
int CountNonZeroElements(double arr[], const int size);
int CountNonZeroElements(float arr[], const int size);
int CountNonZeroElements(char arr[], const int size);
int CountNonZeroElements(long long arr[], const int size);
int CountNonZeroElements(short arr[], const int size);

double Avg(int arr[], int size);
double Avg(double arr[], int size);
double Avg(float arr[], int size);
double Avg(char arr[], int size);
double Avg(long long arr[], int size);
double Avg(short arr[], int size);

double Avg_no_zero(int arr[], int size);
double Avg_no_zero(double arr[], int size);
double Avg_no_zero(float arr[], int size);
double Avg_no_zero(char arr[], int size);
double Avg_no_zero(long long arr[], int size);
double Avg_no_zero(short arr[], int size);

int minValueIn(int arr[], int size);
double minValueIn(double arr[], int size);
float minValueIn(float arr[], int size);
char minValueIn(char arr[], int size);
long long minValueIn(long long arr[], int size);
short minValueIn(short arr[], int size);

int maxValueIn(int arr[], int size);
double maxValueIn(double arr[], int size);
float maxValueIn(float arr[], int size);
char maxValueIn(char arr[], int size);
long long maxValueIn(long long arr[], int size);
short maxValueIn(short arr[], int size);


void cout_arr(int arr[], int size, char ch);
void cout_arr(double arr[], int size, char ch);
void cout_arr(float arr[], int size, char ch);
void cout_arr(char arr[], int size, char ch);
void cout_arr(long long arr[], int size, char ch);
void cout_arr(short arr[], int size, char ch);

void Cikl_Left(int arr[], int size, int L);
void Cikl_Left(double arr[], int size, int L);
void Cikl_Left(float arr[], int size, int L);
void Cikl_Left(char arr[], int size, int L);
void Cikl_Left(long long arr[], int size, int L);
void Cikl_Left(short arr[], int size, int L);

void Cikl_Right(int arr[], int size, int R);
void Cikl_Right(double arr[], int size, int R);
void Cikl_Right(float arr[], int size, int R);
void Cikl_Right(char arr[], int size, int R);
void Cikl_Right(long long arr[], int size, int R);
void Cikl_Right(short arr[], int size, int R);

void Sort(int arr[], int size);
void Sort(double arr[], int size);
void Sort(float arr[], int size);
void Sort(char arr[], int size);
void Sort(long long arr[], int size);
void Sort(short arr[], int size);

int compare(int arr[], const int size, int compared_value);
int compare(double arr[], const int size, double compared_value);
int compare(float arr[], const int size, float compared_value);
int compare(char arr[], const int size, char compared_value);
int compare(long long arr[], const int size, long long compared_value);
int compare(short arr[], const int size, short compared_value);