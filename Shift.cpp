//#include"Shift.h" можно не трогать 
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
