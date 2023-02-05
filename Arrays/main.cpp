//Arrays
#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n]={ 3,5,8 };
	//Integer - целое число
	//Integral - целочисленный
	//arr[2] = 1024;         //обращение к элементу массива на запись
	//cout << arr[2] << endl;//обращение к элементу массива на чтение
	
	// Ввод элементов массива с клавиатуры:
	cout << "Введите элементы массива:";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	//вывод массива на экран в прямом порядке:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вывод массива на экран в обратном порядке:
	for (int i =n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вычисление суммы элементов массива:
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arr[i];
	}
	cout << "Сумма элементов массива:" << summ << endl;
	cout << "Среднее арифметическое:" << (double) summ / n << endl;
	
	int max = arr[0];
	int min = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	cout << "Максимальное число массива = " << max << endl;
	cout << "минимальное число массива = " << min << endl;
}