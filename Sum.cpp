#include"Sum.h"
int Sum(int arr[], const int n)
{

	int sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{

	double sum = 0.0;
	for (size_t i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
float Sum(float arr[], const int n)
{

	float sum = 0.0F;
	for (size_t i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum(char arr[], const int n)
{

	int sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		sum += (int)arr[i];
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