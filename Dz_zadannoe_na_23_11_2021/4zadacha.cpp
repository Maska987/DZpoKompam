#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	char file[100];
	char l[50];
	cout << "Введите имя файла ";
	gets_s(file);
	cout << "Введите расширение для замены ";
	gets_s(l);
	int Len = strlen(l);
	int i = 0;
	while (file[i] != '.' && file[i] != ' ' && file[i] != '\0'){
		i++;
	}
	for (int j = 0; j < Len; j++){
		file[i] = l[j];
		i++;
	}
	file[i] = '\0';
	cout << file;
	return 0;
}
