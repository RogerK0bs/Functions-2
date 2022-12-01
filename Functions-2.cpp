#include <iostream>
#include <windows.h>
using namespace std;
const int ROWS = 3;
const int COLS = 4;

void Fill_Rand (int arr[],const int n, int minRand=0, int maxRand=100);
void Fill_Rand (int arr[ROWS][COLS],const int ROWS,const int COLS, int minRand=0, int maxRand=100);
void Fill_Rand (double arr[ROWS][COLS],const int ROWS,const int COLS, int minRand=0, int maxRand=100);
void Fill_Rand (float arr[ROWS][COLS],const int ROWS,const int COLS, int minRand=0, int maxRand=100);
void Fill_Rand (char arr[ROWS][COLS],const int ROWS,const int COLS, int minRand=0, int maxRand=100);
void Fill_Rand (double arr[],const int n, double minRand=0.0, double maxRand=100.0);
void Fill_Rand (float arr[],const int n, float minRand=0.0, float maxRand=100.0);
void Fill_Rand(char arr[], const int n, int minRand = 0, int maxRand = 100);

void Print (int arr[], const int n);
void Print (double arr[], const int n);
void Print (float arr[], const int n);
void Print (char arr[], const int n);

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum (int arr[], const int n);
double Sum (double arr[], const int n);
float Sum (float arr[], const int n);
char Sum (char arr[], const int n);

double Sum (double arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum (float arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum (char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], int const n);
double Avg(double arr[], int const n);
float Avg(float arr[], int const n);
char Avg(char arr[], int const n);

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

int minValuein(int arr[], const int n);
double minValuein(double arr[], const int n);
float minValuein(float arr[], const int n);
char minValuein(char arr[], const int n);

int minValuein(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValuein(double arr[ROWS][COLS], const int ROWS, const int COLS);
float minValuein(float arr[ROWS][COLS], const int ROWS, const int COLS);
char minValuein(char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValuein(int arr[], const int n);
double maxValuein(double arr[], const int n);
float maxValuein(float arr[], const int n);
char maxValuein(char arr[], const int n);

int maxValuein(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValuein(double arr[ROWS][COLS], const int ROWS, const int COLS);
float maxValuein(float arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValuein(char arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int number_of_shift);
void shiftRight(int arr[], const int n, int number_of_shift);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "rus");
	const int n = 15;
	int arr[n] = {};
	//Fill_Rand(arr, n, -50, 50);
//	Print(arr, n);
	//cout << "Сумма = " << Sum(arr, n) << endl;
	//cout << "Ср ар = " << Avg(arr, n) << endl;
	//cout << "Макс = " << maxValuein(arr, n) << endl;
	//cout << "Мин = " << minValuein(arr, n) << endl;
    //int number_of_shift; cout << endl;
	//cout << "Сдвиг = "; cin >> number_of_shift;
	//shiftLeft(arr, n, number_of_shift); cout << endl;
	//shiftRight(arr, n, number_of_shift);
	//Print(arr, n);
	//Sort(arr, n);
	//Print(arr, n);
	const int SIZE = 8;
	cout << "Double -\n";
	double d_rr[SIZE];
	Fill_Rand(d_rr, SIZE);
	Print(d_rr, SIZE);
	cout << "Сумма = " << Sum(d_rr, SIZE) << endl;
	cout << "Макс = " << maxValuein(d_rr, SIZE) << endl;
	cout << "Мин = " << minValuein(d_rr, SIZE) << endl;
	Sort(d_rr, SIZE);
	Print(d_rr, SIZE);
	cout << endl;

	cout << "float -\n";
	float f_rr[SIZE];
	Fill_Rand(f_rr, SIZE);
	Print(f_rr, SIZE); 
	cout << "Сумма = " << Sum(f_rr, SIZE) << endl;
	cout << "Макс = " << maxValuein(f_rr, SIZE) << endl;
	cout << "Мин = " << minValuein(f_rr, SIZE) << endl;
	Sort(f_rr, SIZE);
	Print(f_rr, SIZE);
	cout << endl;


	cout << "char -\n";
	char c_rr[SIZE];
	Fill_Rand(c_rr, SIZE);
	Print(c_rr, SIZE);
	cout << "Сумма = " <<Sum(c_rr, SIZE) << endl;
	cout << "Макс индекс = " << maxValuein(c_rr, SIZE) << endl;
	cout << "Мин индекс = " << minValuein(c_rr, SIZE) << endl;
	Sort(c_rr, SIZE);
	Print(c_rr, SIZE);
	cout << endl;
	system("cls");

	int i_arr_2[ROWS][COLS];
	Fill_Rand(i_arr_2, ROWS, COLS);
	Print(i_arr_2,ROWS,COLS);
	cout << "Сумма = " << Sum(i_arr_2, ROWS,COLS) << endl;
	cout << "Макс = " << maxValuein(i_arr_2, ROWS, COLS) << endl;
	cout << "Мин = " << minValuein(i_arr_2, ROWS, COLS) << endl;
	cout << "Ср ар = " << Avg(i_arr_2, ROWS,COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "\n\n" << "----------------------------------------------------------------------------------------\n";
	

	double d_arr_2[ROWS][COLS];
	Fill_Rand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма = " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Макс = " << maxValuein(d_arr_2, ROWS, COLS) << endl;
	cout << "Мин = " << minValuein(d_arr_2, ROWS, COLS) << endl;
	cout << "Ср ар = " << Avg(d_arr_2, ROWS, COLS) << endl;
	Sort(d_arr_2, ROWS,COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "\n\n" << "----------------------------------------------------------------------------------------\n";

	float f_arr_2[ROWS][COLS];
	Fill_Rand(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);
	cout << "Сумма = " << Sum(f_arr_2, ROWS, COLS) << endl;
	cout << "Макс = " << maxValuein(f_arr_2, ROWS, COLS) << endl;
	cout << "Мин = " << minValuein(f_arr_2, ROWS, COLS) << endl;
	cout << "Ср ар = " << Avg(f_arr_2, ROWS, COLS) << endl;
	Sort(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);
	cout << "\n\n" << "----------------------------------------------------------------------------------------\n";

	char c_arr_2[ROWS][COLS];
	Fill_Rand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сумма = " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Макс = " << maxValuein(c_arr_2, ROWS, COLS) << endl;
	cout << "Мин = " << minValuein(c_arr_2, ROWS, COLS) << endl;
	cout << "Ср ар = " << Avg(c_arr_2, ROWS, COLS) << endl;
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "\n\n" << "----------------------------------------------------------------------------------------\n";


}

void Fill_Rand (int arr[], const int n, int minRand, int maxRand)
{
	if (minRand>maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand)+minRand;
	}
}
void Fill_Rand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		arr[i][j] = rand() % (maxRand - minRand) + minRand;
	}
}
void Fill_Rand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		double buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % int((maxRand - minRand) + minRand);
			arr[i][j] /= 100;
		}
	}
}
void Fill_Rand(float arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		float buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % int((maxRand - minRand) + minRand);
			arr[i][j] /= 100;
		}
	}
}
void Fill_Rand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
			arr[i][j] = char((rand() % ((maxRand - minRand) + minRand)));
	}
}
void Fill_Rand(double arr[], const int n, double minRand, double maxRand)
{
	if (minRand > maxRand)
	{
		double buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = rand() %int ((maxRand - minRand) + minRand);
		arr[i] /= 100;
	}
}
void Fill_Rand(float arr[], const int n, float minRand, float maxRand)
{
	if (minRand > maxRand)
	{
		float buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = rand() % int((maxRand - minRand) + minRand);
		arr[i] /= 100;
	}
}
void Fill_Rand(char arr[], const int n, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = char((rand() % ((maxRand - minRand) + minRand)));
		//arr[i] =(int)arr[i]/100;
	}
}

void Print (int arr[], const int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}
void Print(float arr[], const int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int Sum (int arr[], const int n)
{

	int sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum (double arr[], const int n)
{

	double sum = 0.0;
	for (size_t i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
float Sum (float arr[], const int n)
{

	float sum = 0.0F;
	for (size_t i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum (char arr[], const int n)
{
	
	int sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		sum +=(int)arr[i];
	}
	return sum;
}

double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0.0;
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
		
	}
	return sum;
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}

	}
	return sum;
}
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float sum = 0.0;
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}

	}
	return sum;
}
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			sum += (int)arr[i][j];
		}

	}
	return (char)sum;
}

double Avg (int arr[], int const n)
{
	return (double)Sum(arr, n) / n;

}
double Avg (double arr[], int const n)
{
	return Sum(arr, n) / n;

}
float Avg (float arr[], int const n)
{
	return Sum(arr, n) / n;

}
char Avg (char arr[], int const n)
{
	int mid = (int)Sum(arr, n) / n;
	return mid ;

}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr,ROWS,COLS) / (ROWS*COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int mid=Sum(arr, ROWS, COLS) / (ROWS * COLS);
	return mid;
}


int minValuein(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];

	}
	return min;

}
double minValuein(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];

	}
	return min;

}
float minValuein(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];

	}
	return min;

}
char minValuein(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if ((int)arr[i] < (int)min)min = arr[i];

	}
	return min;

}

int minValuein(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
		

	}
	return min;

}
double minValuein(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}


	}
	return min;
}
float minValuein(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}


	}
	return min;

}
char minValuein(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			if ((int)arr[i][j] < (int)min)min = arr[i][j];
		}


	}
	return min;
}

int maxValuein(int arr[], const int n)
{
	int max = arr[0];
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];

	}
	return max;
}
double maxValuein(double arr[], const int n)
{
	double max = arr[0];
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];

	}
	return max;
}
float maxValuein(float arr[], const int n)
{
	float max = arr[0];
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];

	}
	return max;
}
char maxValuein(char arr[], const int n)
{
	char max = arr[0];
	for (size_t i = 0; i < n; i++)
	{
		if ((int)arr[i] > (int)max)max = arr[i];

	}
	return max;
}

int maxValuein(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}


	}
	return max;
}
double maxValuein(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}


	}
	return max;
}
float maxValuein(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}


	}
	return max;
}
char maxValuein(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			if ((int)arr[i][j] > (int)max)max = arr[i][j];
		}
	}
	return max;
}

void shiftLeft(int arr[], const int n, int number_of_shift)
{
	int buffer = arr[0];
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = buffer;

}
void shiftRight(int arr[], const int n, int number_of_shift)
{
	shiftLeft(arr, n, number_of_shift);

}

void Sort(int arr[], const int n)
{
	cout << "\nСортировка массива в порядке возрастания:\n";
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = i + 1; j < n - 1; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	cout << "\nСортировка массива в порядке возрастания:\n";
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = i + 1; j < n - 1; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(float arr[], const int n)
{
	cout << "\nСортировка массива в порядке возрастания:\n";
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = i + 1; j < n - 1; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	cout << "\nСортировка массива в порядке возрастания индекса:\n";
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = i+1; j < n - 1; j++)
		{
			if ((int)arr[j] < (int)arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int buffer = arr[0][0];
	cout << "\nСортировка массива в порядке возрастания:\n";
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			if (arr[i][j]<buffer)
			{
				int swap = arr[i][j];
				arr[i][j] = buffer;
				buffer = swap;
			}
			
		}
	}
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double buffer = arr[0][0];
	cout << "\nСортировка массива в порядке возрастания:\n";
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			if (arr[i][j] < buffer)
			{
				double swap = arr[i][j];
				arr[i][j] = buffer;
				buffer = swap;
			}

		}
	}
}
void Sort(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float buffer = arr[0][0];
	cout << "\nСортировка массива в порядке возрастания:\n";
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			if (arr[i][j] < buffer)
			{
				float swap = arr[i][j];
				arr[i][j] = buffer;
				buffer = swap;
			}

		}
	}
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char buffer = arr[0][0];
	cout << "\nСортировка массива в порядке возрастания:\n";
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLS; j++)
		{
			if ((int)arr[i][j] < (int)buffer)
			{
				char swap = arr[i][j];
				arr[i][j] = buffer;
				buffer = swap;
			}

		}
	}
}