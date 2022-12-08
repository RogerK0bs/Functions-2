#include "stdafx.h"
#include"Constans.h"
#include "Fill_Rand.h"
#include"Print.h"
#include"Sum.h"
#include"Shift.h"
#include"Avg.h"
#include"Sort.h"
#include"Statistics.h"

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
	/*const int SIZE = 8;
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
	system("cls");*/
	int i_arr_2[ROWS][COLS];
	Fill_Rand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма = " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Макс = " << maxValuein(i_arr_2, ROWS, COLS) << endl;
	cout << "Мин = " << minValuein(i_arr_2, ROWS, COLS) << endl;
	cout << "Ср ар = " << Avg(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	LINE
		double d_arr_2[ROWS][COLS];
	Fill_Rand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма = " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Макс = " << maxValuein(d_arr_2, ROWS, COLS) << endl;
	cout << "Мин = " << minValuein(d_arr_2, ROWS, COLS) << endl;
	cout << "Ср ар = " << Avg(d_arr_2, ROWS, COLS) << endl;
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	LINE
		float f_arr_2[ROWS][COLS];
	Fill_Rand(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);
	cout << "Сумма = " << Sum(f_arr_2, ROWS, COLS) << endl;
	cout << "Макс = " << maxValuein(f_arr_2, ROWS, COLS) << endl;
	cout << "Мин = " << minValuein(f_arr_2, ROWS, COLS) << endl;
	cout << "Ср ар = " << Avg(f_arr_2, ROWS, COLS) << endl;
	Sort(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);
	LINE
		char c_arr_2[ROWS][COLS];
	Fill_Rand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сумма = " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Макс = " << maxValuein(c_arr_2, ROWS, COLS) << endl;
	cout << "Мин = " << minValuein(c_arr_2, ROWS, COLS) << endl;
	cout << "Ср ар = " << Avg(c_arr_2, ROWS, COLS) << endl;
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	LINE
}
//asd123ed