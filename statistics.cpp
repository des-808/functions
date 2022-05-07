int Sum(int arr[], int size) {	//���������� ����� ��������� �������
	int tmp = 0;
	for (int i = 0; i < size; i++) {
		tmp += arr[i];
	}
	return tmp;
}
double Sum(double arr[], int size) {	//���������� ����� ��������� �������
	double tmp = 0;
	for (int i = 0; i < size; i++) {
		tmp += arr[i];
	}
	return tmp;
}
float Sum(float arr[], int size) {	//���������� ����� ��������� �������
	float tmp = 0;
	for (int i = 0; i < size; i++) {
		tmp += arr[i];
	}
	return tmp;
}
char Sum(char arr[], int size) {	//���������� ����� ��������� �������
	char tmp = 0;
	for (int i = 0; i < size; i++) {
		tmp += arr[i];
	}
	return tmp;
}
long long Sum(long long arr[], int size) {	//���������� ����� ��������� �������
	long long tmp = 0;
	for (int i = 0; i < size; i++) {
		tmp += arr[i];
	}
	return tmp;
}
short Sum(short arr[], int size) {	//���������� ����� ��������� �������
	short tmp = 0;
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
int CountNonZeroElements(double arr[], const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0)count++;
	}
	return count;
}
int CountNonZeroElements(float arr[], const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0)count++;
	}
	return count;
}
int CountNonZeroElements(char arr[], const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0)count++;
	}
	return count;
}
int CountNonZeroElements(long long arr[], const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0)count++;
	}
	return count;
}
int CountNonZeroElements(short arr[], const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0)count++;
	}
	return count;
}

double Avg(int arr[], int size) {	//���������� ������� �������������� ��������� �������
	return (double)Sum(arr, size) / size;
}
double Avg(double arr[], int size) {	//���������� ������� �������������� ��������� �������
	return (double)Sum(arr, size) / size;
}
double Avg(float arr[], int size) {	//���������� ������� �������������� ��������� �������
	return (double)Sum(arr, size) / size;
}
double Avg(char arr[], int size) {	//���������� ������� �������������� ��������� �������
	return (double)Sum(arr, size) / size;
}
double Avg(long long arr[], int size) {	//���������� ������� �������������� ��������� �������
	return (double)Sum(arr, size) / size;
}
double Avg(short arr[], int size) {	//���������� ������� �������������� ��������� �������
	return (double)Sum(arr, size) / size;
}

double Avg_no_zero(int arr[], int size) {	//���������� ������� �������������� ��������� �������
	return (double)Sum(arr, size) / CountNonZeroElements(arr, size);
}
double Avg_no_zero(double arr[], int size) {	//���������� ������� �������������� ��������� �������
	return (double)Sum(arr, size) / CountNonZeroElements(arr, size);
}
double Avg_no_zero(float arr[], int size) {	//���������� ������� �������������� ��������� �������
	return (double)Sum(arr, size) / CountNonZeroElements(arr, size);
}
double Avg_no_zero(char arr[], int size) {	//���������� ������� �������������� ��������� �������
	return (double)Sum(arr, size) / CountNonZeroElements(arr, size);
}
double Avg_no_zero(long long arr[], int size) {	//���������� ������� �������������� ��������� �������
	return (double)Sum(arr, size) / CountNonZeroElements(arr, size);
}
double Avg_no_zero(short arr[], int size) {	//���������� ������� �������������� ��������� �������
	return (double)Sum(arr, size) / CountNonZeroElements(arr, size);
}

int minValueIn(int arr[], int size) {	//���������� ����������� �������� �� �������
	int tmp_min = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_min > arr[i])tmp_min = arr[i];
	}
	return tmp_min;
}
double minValueIn(double arr[], int size) {	//���������� ����������� �������� �� �������
	double tmp_min = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_min > arr[i])tmp_min = arr[i];
	}
	return tmp_min;
}
float minValueIn(float arr[], int size) {	//���������� ����������� �������� �� �������
	float tmp_min = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_min > arr[i])tmp_min = arr[i];
	}
	return tmp_min;
}
char minValueIn(char arr[], int size) {	//���������� ����������� �������� �� �������
	char tmp_min = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_min > arr[i])tmp_min = arr[i];
	}
	return tmp_min;
}
long long minValueIn(long long arr[], int size) {	//���������� ����������� �������� �� �������
	long long tmp_min = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_min > arr[i])tmp_min = arr[i];
	}
	return tmp_min;
}
short minValueIn(short arr[], int size) {	//���������� ����������� �������� �� �������
	short tmp_min = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_min > arr[i])tmp_min = arr[i];
	}
	return tmp_min;
}

int maxValueIn(int arr[], int size) {	//���������� ������������ �������� �� �������
	int tmp_max = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_max < arr[i])tmp_max = arr[i];
	}
	return tmp_max;
}
double maxValueIn(double arr[], int size) {	//���������� ������������ �������� �� �������
	double tmp_max = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_max < arr[i])tmp_max = arr[i];
	}
	return tmp_max;
}
float maxValueIn(float arr[], int size) {	//���������� ������������ �������� �� �������
	float tmp_max = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_max < arr[i])tmp_max = arr[i];
	}
	return tmp_max;
}
char maxValueIn(char arr[], int size) {	//���������� ������������ �������� �� �������
	char tmp_max = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_max < arr[i])tmp_max = arr[i];
	}
	return tmp_max;
}
long long maxValueIn(long long arr[], int size) {	//���������� ������������ �������� �� �������
	long long tmp_max = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_max < arr[i])tmp_max = arr[i];
	}
	return tmp_max;
}
short maxValueIn(short arr[], int size) {	//���������� ������������ �������� �� �������
	short tmp_max = arr[0];
	for (int i = 0; i < size; i++) {
		if (tmp_max < arr[i])tmp_max = arr[i];
	}
	return tmp_max;
}