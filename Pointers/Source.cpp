#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

//#define POINTERS_BASICS
#define SPLIT
void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl; //взятие адреса прямо при выводе
	cout << pa << endl; //вывод адреса переменной в указателе pa
	cout << *pa << endl; //разыменование указателя pa и вывод на экран 
						 //значения по адресу

	*int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;

	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
#endif //POINTERS_BASICS

	const int n = 10;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);

#ifdef SPLIT
	int even_count = 0;
	int odd_count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even_count++;
		}
		else
		{
			odd_count++;
		}
	}

	int* even_arr = new int[even_count];
	int* odd_arr = new int[odd_count];

	for (int i = 0, j = 0, k = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even_arr[j++] = arr[i];
		}
		else
		{
			odd_arr[k++] = arr[i];
		}

	}
	Print(even_arr, even_count);
	Print(odd_arr, odd_count);

	delete[] even_arr;
	delete[] odd_arr;
#endif //SPLIT
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << endl;
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
