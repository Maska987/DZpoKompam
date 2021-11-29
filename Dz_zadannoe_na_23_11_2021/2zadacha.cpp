#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	char q[80];
	cout << "Введите пример ";
	cin.get(q, 80);
	int sum = 0;
	string chislo;
	for (int i = 0; i < strlen(q); i++) {

		if (q[i] != '+') {
			chislo += q[i];
		}
		else {
			sum += stoi(chislo);
			chislo = "";
		}
	}
	sum += stoi(chislo);
	cout << "Решение " << sum;

	return 0;
}
