#include"Sort.h"

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
		for (size_t j = i + 1; j < n - 1; j++)
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
			if (arr[i][j] < buffer)
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
