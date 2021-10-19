#include <iostream>
using namespace std;


void F(int x, int y = 2) {
	if (x != 1 && x != 0) {
		if (x % y == 0) {
			cout << y << " ";
			F(x / y, y);
		}
		else
			F(x, y + 1);
	}
}

int main() {
	int x;
	cin >> x;
	F(x);
	return 0;
}