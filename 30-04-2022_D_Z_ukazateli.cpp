// 30-04-2022_D_Z_ukazateli.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Указатели. Неделя 13
// Задание 1. Используя  указатель на массив целых чисел,
//	изменить порядок следования элементов массива на противоположный. Использовать в программе арифметику указателей 
//	для продвижения по массиву, а так же оператор разыменования. 14-19...?
// 

#include <iostream>
using namespace std;
int GetRandomNumber();
int Foo1()
{
	int razm;
	int val{ 0 };
	cout << "1 Фунция распределения динамической памяти\n";
	int* dan1;
	cout << "Ввести размерность массива : ";
	int size1;
	cin >> size1;
	dan1 = new int[size1];
	for (int i = 0; i < size1; i++) {
		//cout << "dan1[" << i << "] = ";
		dan1[i] = GetRandomNumber();// заполняем массив рандомами от 0 до 9
	}
	for (int i = 0; i < size1; i++, dan1++)
	{
		cout << "\nадрес " << &*dan1;
		cout << "\t\tзначение " << *dan1 << "\n";
	}
	//delete[] dan1;
	razm = sizeof(dan1);
	cout << "размерность массива : " << size1 << endl;
	for (int i = 0; i < size1; i++, dan1++)
	{
		cout << "\nадрес " << &*dan1;
		cout << "\t\tзначение " << *dan1 << "\n";
	}

	cin.get();
	return 0;
}
int GetRandomNumber()
{

	//	srand(time(NULL));
	int min{ 0 };
	int max{ 9 };
	// Установить генератор случайных чисел

	// Получить случайное число - формула
	int num = min + rand() % (max - min + 1);

	return num;

}
int main()
{
	system("chcp 1251");
	system("Color 0A");
	Foo1();

}

