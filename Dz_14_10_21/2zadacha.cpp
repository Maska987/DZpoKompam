#include <iostream>
using namespace std;

int St(int x, int y) {
	if (y == 0)
		return 1;
	return St(x, y - 1) * x;
}

int F(int x, int n = 0) {
	if (x == 0)
		return 0;
	return (x % 10) * St(2, n) + F(x / 10, n + 1);
}

int main() {
	int x;
	cin >> x;
	cout << F(x);
	return 0;
}

