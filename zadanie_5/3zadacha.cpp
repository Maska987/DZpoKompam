#include <iostream>
#include <string>
#include "windows.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char FIO[256];
  cout << "Введите с клавиатуры в одну строку фамилию, имя и отчество, разделив их пробелом ";
	gets_s(FIO);
	int len = strlen(FIO);
	char Family[256];
	int i = 0;
	while (FIO[i] != ' '){
		Family[i] = FIO[i];
		i++;
	}
	Family[i] = '\0';
	for (i; i < len; i++){
		if (FIO[i] == ' '){
		cout << FIO[i+1] << '.';
		}
	}
	cout << ' ';
	cout << Family;
  return 0;
}
