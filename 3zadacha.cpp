#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int m, t, s, x;
	std::cin >> x;

	if (x < 0) {
		std::cout << "минус ";
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
		std::cout << "один миллион ";
		break;
	case 2:
		std::cout << "два миллиона ";
		break;
	case 3:
		std::cout << "три миллиона ";
		break;
	case 4:
		std::cout << "четыре миллиона ";
		break;
	case 5:
		std::cout << "пять миллионов ";
		break;
	case 6:
		std::cout << "шесть миллионов ";
		break;
	case 7:
		std::cout << "семь миллионов ";
		break;
	case 8:
		std::cout << "восемь миллионов ";
		break;
	case 9:
		std::cout << "девяит миллионов ";
		break;
	case 10:
		std::cout << "десять миллионов ";
		break;
	}

	x = t / 100;
	switch (x)
	{
	case 1:
		std::cout << "сто ";
		break;
	case 2:
		std::cout << "двести ";
		break;
	case 3:
		std::cout << "триста ";
		break;
	case 4:
		std::cout << "четыриста ";
		break;
	case 5:
		std::cout << "пятьсот ";
		break;
	case 6:
		std::cout << "шестьсот ";
		break;
	case 7:
		std::cout << "семьсот ";
		break;
	case 8:
		std::cout << "восемьсот ";
		break;
	case 9:
		std::cout << "девятьсот ";
		break;
	}

	if ((t / 10) % 10 == 1 && t % 10 > 0) {
		x = t % 10;
		switch (x)
		{
		case 1:
			std::cout << "одиннадцать ";
			break;
		case 2:
			std::cout << "двенадцать ";
			break;
		case 3:
			std::cout << "тринадцать ";
			break;
		case 4:
			std::cout << "четырнадцать ";
			break;
		case 5:
			std::cout << "пятнадцать ";
			break;
		case 6:
			std::cout << "шестнадцать ";
			break;
		case 7:
			std::cout << "семнадцать ";
			break;
		case 8:
			std::cout << "восемнадцать ";
			break;
		case 9:
			std::cout << "девятнадцать ";
			break;
		}
	}
	else {
		x = (t / 10) % 10;
		switch (x)
		{
		case 1:
			std::cout << "десять ";
			break;
		case 2:
			std::cout << "двадцать ";
			break;
		case 3:
			std::cout << "тридцать ";
			break;
		case 4:
			std::cout << "сорок ";
			break;
		case 5:
			std::cout << "пятьдесят ";
			break;
		case 6:
			std::cout << "шестьдесят ";
			break;
		case 7:
			std::cout << "семьдесят ";
			break;
		case 8:
			std::cout << "восемьдесят ";
			break;
		case 9:
			std::cout << "девяносто ";
			break;
		}

		x = t % 10;
		switch (x)
		{
		case 1:
			std::cout << "один ";
			break;
		case 2:
			std::cout << "два ";
			break;
		case 3:
			std::cout << "три ";
			break;
		case 4:
			std::cout << "четыре ";
			break;
		case 5:
			std::cout << "пять ";
			break;
		case 6:
			std::cout << "шесть ";
			break;
		case 7:
			std::cout << "семь ";
			break;
		case 8:
			std::cout << "восемь ";
			break;
		case 9:
			std::cout << "девять ";
			break;
		}
	}
	if (t > 0) {
		std::cout << "тысяч ";
	}

	x = s / 100;
	switch (x)
	{
	case 1:
		std::cout << "сто ";
		break;
	case 2:
		std::cout << "двести ";
		break;
	case 3:
		std::cout << "триста ";
		break;
	case 4:
		std::cout << "четыриста ";
		break;
	case 5:
		std::cout << "пятьсот ";
		break;
	case 6:
		std::cout << "шестьсот ";
		break;
	case 7:
		std::cout << "семьсот ";
		break;
	case 8:
		std::cout << "восемьсот ";
		break;
	case 9:
		std::cout << "девятьсот ";
		break;
	}

	if ((s / 10) % 10 == 1 && s % 10 > 0) {
		x = s % 10;
		switch (x)
		{
		case 1:
			std::cout << "одиннадцать ";
			break;
		case 2:
			std::cout << "двенадцать ";
			break;
		case 3:
			std::cout << "тринадцать ";
			break;
		case 4:
			std::cout << "четырнадцать ";
			break;
		case 5:
			std::cout << "пятнадцать ";
			break;
		case 6:
			std::cout << "шестнадцать ";
			break;
		case 7:
			std::cout << "семнадцать ";
			break;
		case 8:
			std::cout << "восемнадцать ";
			break;
		case 9:
			std::cout << "девятнадцать ";
			break;
		}
	}
	else {
		x = (s / 10) % 10;
		switch (x)
		{
		case 1:
			std::cout << "десять ";
			break;
		case 2:
			std::cout << "двадцать ";
			break;
		case 3:
			std::cout << "тридцать ";
			break;
		case 4:
			std::cout << "сорок ";
			break;
		case 5:
			std::cout << "пятьдесят ";
			break;
		case 6:
			std::cout << "шестьдесят ";
			break;
		case 7:
			std::cout << "семьдесят ";
			break;
		case 8:
			std::cout << "восемьдесят ";
			break;
		case 9:
			std::cout << "девяносто ";
			break;
		}

		x = s % 10;
		switch (x)
		{
		case 1:
			std::cout << "один ";
			break;
		case 2:
			std::cout << "два ";
			break;
		case 3:
			std::cout << "три ";
			break;
		case 4:
			std::cout << "четыре ";
			break;
		case 5:
			std::cout << "пять ";
			break;
		case 6:
			std::cout << "шесть ";
			break;
		case 7:
			std::cout << "семь ";
			break;
		case 8:
			std::cout << "восемь ";
			break;
		case 9:
			std::cout << "девять ";
			break;
		}
	}
	if (s + m + t == 0)
		std::cout << "ноль";

	return 0;
}
