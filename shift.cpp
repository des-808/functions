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
void Cikl_Left(double arr[], int size, int L) {
	double l = 0;
	for (int i = 0; i < L; i++) {
		l = arr[0];
		for (int j = 0; j < size - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[size - 1] = l;
	}
}
void Cikl_Left(float arr[], int size, int L) {
	float l = 0;
	for (int i = 0; i < L; i++) {
		l = arr[0];
		for (int j = 0; j < size - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[size - 1] = l;
	}
}
void Cikl_Left(char arr[], int size, int L) {
	char l = 0;
	for (int i = 0; i < L; i++) {
		l = arr[0];
		for (int j = 0; j < size - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[size - 1] = l;
	}
}
void Cikl_Left(long long arr[], int size, int L) {
	long long l = 0;
	for (int i = 0; i < L; i++) {
		l = arr[0];
		for (int j = 0; j < size - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[size - 1] = l;
	}
}
void Cikl_Left(short arr[], int size, int L) {
	short l = 0;
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
void Cikl_Right(double arr[], int size, int R) {
	double r = 0;
	for (int i = 0; i < R; i++) {
		r = arr[size - 1];
		for (int j = size - 1; j != 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = r;
	}
}
void Cikl_Right(float arr[], int size, int R) {
	float r = 0;
	for (int i = 0; i < R; i++) {
		r = arr[size - 1];
		for (int j = size - 1; j != 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = r;
	}
}
void Cikl_Right(char arr[], int size, int R) {
	char r = 0;
	for (int i = 0; i < R; i++) {
		r = arr[size - 1];
		for (int j = size - 1; j != 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = r;
	}
}
void Cikl_Right(long long arr[], int size, int R) {
	long long r = 0;
	for (int i = 0; i < R; i++) {
		r = arr[size - 1];
		for (int j = size - 1; j != 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = r;
	}
}
void Cikl_Right(short arr[], int size, int R) {
	short r = 0;
	for (int i = 0; i < R; i++) {
		r = arr[size - 1];
		for (int j = size - 1; j != 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = r;
	}
}