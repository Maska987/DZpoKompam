#include <iostream>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	char q[80];
	int k = 0, i = 0;
	cout << "Введите строку ";
	cin.get(q, 80);
	int flag = 1;
	while (q[i] != '\0') {
		i++;
	}
	int dlinaq = i - 1;
	i = 0;
	while (q[i] != '\0' && flag == 1) {
		if (q[i] != q[dlinaq]) {
			flag = 0;
		}
		else {
			i++;
			dlinaq--;
		}
	}
	if (flag == 1) {
		cout << "Строка является палиндромом";
	}
	else{
		cout << "Строка не является палиндромом";
	}
	return 0;
}
