#include <iostream>
#include <ctime>

using namespace std;

void a_progr(int* array, int size, int a, int d)
{
	for (int i = 0; i < size; i++)
		*(array++) = a + d * i;
}

void rand_per(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = 1 + rand() % size;
		for (int o = 0; o < i; o++)
			if (array[o] == array[i])
				i = i - 1;

	}
}

void print_array(int array[], int size)
{
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int size;
	cout << "Введите размер массива: ";
	cin >> size;
	int* array = new int[size];

	int a, d;
	cout << "Введите первый эллемент арифметической прогрессии: ";
	cin >> a;
	cout << "Введите разность: ";
	cin >> d;
	a_progr(array, size, a, d);
	print_array(array, size);

	cout << "Случайная перестановка: ";
	rand_per(array, size);
	print_array(array, size);
}
