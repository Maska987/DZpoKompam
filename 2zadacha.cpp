#include <iostream>


int main() {
	setlocale(LC_ALL, "Russian");
	int d, m;
	std::cout << "������� ���� � ����� ����� ������" << std::endl;
	std::cin >> d >> m;
	if (m > 12 || m < 1 || d < 0 || d > 31) {
		std::cout << "������� ��������� ������";
	}
	else {
		switch (m)
		{
		case 1:
			if (d <= 31)
				std::cout << 365 - d + 1 << " ���� �� ������ ����";
			break;
		case 2:
			if (d <= 28)
				std::cout << 337 - d + 1 << " ���� �� ������ ����";
			break;
		case 3:
			if (d <= 31)
				std::cout << (306 - d + 1) << " ���� �� ������ ����";
			break;
		case 4:
			if (d <= 30)
				std::cout << (275 - d + 1) << " ���� �� ������ ����";
			break;
		case 5:
			if (d <= 31)
				std::cout << (245 - d + 1) << " ���� �� ������ ����";
			break;
		case 6:
			if (d <= 30)
				std::cout << (214 - d + 1) << " ���� �� ������ ����";
			break;
		case 7:
			if (d <= 31)
				std::cout << (184 - d + 1) << " ���� �� ������ ����";
			break;
		case 8:
			if (d <= 31)
				std::cout << (153 - d + 1) << " ���� �� ������ ����";
			break;
		case 9:
			if (d <= 30)
				std::cout << (122 - d + 1) << " ���� �� ������ ����";
			break;
		case 10:
			if (d <= 31)
				std::cout << (92 - d + 1) << " ���� �� ������ ����";
			break;
		case 11:
			if (d <= 30)
				std::cout << (61 - d + 1) << " ���� �� ������ ����";
			break;
		case 12:
			if (d <= 31)
				std::cout << (31 - d + 1) << " ���� �� ������ ����";
			break;
		default:
			std::cout << "������� ��������� ������";
		}
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}