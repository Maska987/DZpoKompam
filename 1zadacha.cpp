#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	std::cin >> a;
	if (a / 100 > 0 && a / 100 < 10)
		std::cout << "����� �����������";
	else
		std::cout << "����� �� �����������";

	return 0;
}
