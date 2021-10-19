#include <iostream>
using namespace std;

void F(int x) {
	if (x != 0)
	{
		F(x / 10);
		cout << x % 10 << " ";

	}
}

int main() {
	int x;
	cin >> x;
	F(x);
	return 0;
}

