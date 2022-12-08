#pragma once
#include"stdafx.h"
#include"Constans.h"

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
