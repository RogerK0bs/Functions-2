#include"Statistics.h"

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
