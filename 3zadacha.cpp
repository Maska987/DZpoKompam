#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int m, t, s, x;
	std::cin >> x;

	if (x < 0) {
		std::cout << "����� ";
		x = x * -1;
	}
	s = x % 1000;
	x = x / 1000;
	t = x % 1000;
	x = x / 1000;
	m = x;




	switch (m)
	{
	case 1:
		std::cout << "���� ������� ";
		break;
	case 2:
		std::cout << "��� �������� ";
		break;
	case 3:
		std::cout << "��� �������� ";
		break;
	case 4:
		std::cout << "������ �������� ";
		break;
	case 5:
		std::cout << "���� ��������� ";
		break;
	case 6:
		std::cout << "����� ��������� ";
		break;
	case 7:
		std::cout << "���� ��������� ";
		break;
	case 8:
		std::cout << "������ ��������� ";
		break;
	case 9:
		std::cout << "������ ��������� ";
		break;
	case 10:
		std::cout << "������ ��������� ";
		break;
	}

	x = t / 100;
	switch (x)
	{
	case 1:
		std::cout << "��� ";
		break;
	case 2:
		std::cout << "������ ";
		break;
	case 3:
		std::cout << "������ ";
		break;
	case 4:
		std::cout << "��������� ";
		break;
	case 5:
		std::cout << "������� ";
		break;
	case 6:
		std::cout << "�������� ";
		break;
	case 7:
		std::cout << "������� ";
		break;
	case 8:
		std::cout << "��������� ";
		break;
	case 9:
		std::cout << "��������� ";
		break;
	}

	if ((t / 10) % 10 == 1 && t % 10 > 0) {
		x = t % 10;
		switch (x)
		{
		case 1:
			std::cout << "����������� ";
			break;
		case 2:
			std::cout << "���������� ";
			break;
		case 3:
			std::cout << "���������� ";
			break;
		case 4:
			std::cout << "������������ ";
			break;
		case 5:
			std::cout << "���������� ";
			break;
		case 6:
			std::cout << "����������� ";
			break;
		case 7:
			std::cout << "���������� ";
			break;
		case 8:
			std::cout << "������������ ";
			break;
		case 9:
			std::cout << "������������ ";
			break;
		}
	}
	else {
		x = (t / 10) % 10;
		switch (x)
		{
		case 1:
			std::cout << "������ ";
			break;
		case 2:
			std::cout << "�������� ";
			break;
		case 3:
			std::cout << "�������� ";
			break;
		case 4:
			std::cout << "����� ";
			break;
		case 5:
			std::cout << "��������� ";
			break;
		case 6:
			std::cout << "���������� ";
			break;
		case 7:
			std::cout << "��������� ";
			break;
		case 8:
			std::cout << "����������� ";
			break;
		case 9:
			std::cout << "��������� ";
			break;
		}

		x = t % 10;
		switch (x)
		{
		case 1:
			std::cout << "���� ";
			break;
		case 2:
			std::cout << "��� ";
			break;
		case 3:
			std::cout << "��� ";
			break;
		case 4:
			std::cout << "������ ";
			break;
		case 5:
			std::cout << "���� ";
			break;
		case 6:
			std::cout << "����� ";
			break;
		case 7:
			std::cout << "���� ";
			break;
		case 8:
			std::cout << "������ ";
			break;
		case 9:
			std::cout << "������ ";
			break;
		}
	}
	if (t > 0) {
		std::cout << "����� ";
	}

	x = s / 100;
	switch (x)
	{
	case 1:
		std::cout << "��� ";
		break;
	case 2:
		std::cout << "������ ";
		break;
	case 3:
		std::cout << "������ ";
		break;
	case 4:
		std::cout << "��������� ";
		break;
	case 5:
		std::cout << "������� ";
		break;
	case 6:
		std::cout << "�������� ";
		break;
	case 7:
		std::cout << "������� ";
		break;
	case 8:
		std::cout << "��������� ";
		break;
	case 9:
		std::cout << "��������� ";
		break;
	}

	if ((s / 10) % 10 == 1 && s % 10 > 0) {
		x = s % 10;
		switch (x)
		{
		case 1:
			std::cout << "����������� ";
			break;
		case 2:
			std::cout << "���������� ";
			break;
		case 3:
			std::cout << "���������� ";
			break;
		case 4:
			std::cout << "������������ ";
			break;
		case 5:
			std::cout << "���������� ";
			break;
		case 6:
			std::cout << "����������� ";
			break;
		case 7:
			std::cout << "���������� ";
			break;
		case 8:
			std::cout << "������������ ";
			break;
		case 9:
			std::cout << "������������ ";
			break;
		}
	}
	else {
		x = (s / 10) % 10;
		switch (x)
		{
		case 1:
			std::cout << "������ ";
			break;
		case 2:
			std::cout << "�������� ";
			break;
		case 3:
			std::cout << "�������� ";
			break;
		case 4:
			std::cout << "����� ";
			break;
		case 5:
			std::cout << "��������� ";
			break;
		case 6:
			std::cout << "���������� ";
			break;
		case 7:
			std::cout << "��������� ";
			break;
		case 8:
			std::cout << "����������� ";
			break;
		case 9:
			std::cout << "��������� ";
			break;
		}

		x = s % 10;
		switch (x)
		{
		case 1:
			std::cout << "���� ";
			break;
		case 2:
			std::cout << "��� ";
			break;
		case 3:
			std::cout << "��� ";
			break;
		case 4:
			std::cout << "������ ";
			break;
		case 5:
			std::cout << "���� ";
			break;
		case 6:
			std::cout << "����� ";
			break;
		case 7:
			std::cout << "���� ";
			break;
		case 8:
			std::cout << "������ ";
			break;
		case 9:
			std::cout << "������ ";
			break;
		}
	}
	if (s + m + t == 0)
		std::cout << "����";

	return 0;
}
