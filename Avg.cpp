//#include"Avg.h"
#include"Sum.h"
double Avg(int arr[], int const n)
{
	return (double)Sum(arr, n) / n;

}
double Avg(double arr[], int const n)
{
	return Sum(arr, n) / n;

}
float Avg(float arr[], int const n)
{
	return Sum(arr, n) / n;

}
char Avg(char arr[], int const n)
{
	int mid = (int)Sum(arr, n) / n;
	return mid;

}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
	int mid = Sum(arr, ROWS, COLS) / (ROWS * COLS);
	return mid;
}
