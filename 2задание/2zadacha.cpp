#include <iostream>
#include <cmath>

using namespace std;


int F(int n)
{
    if (n < 0)
        return -1;
    if (n <= 2)
        return 1;
    return F(n - 1) + F(n - 2);
}


int main()
{
    setlocale(LC_ALL, "Rus");

    int n, x;
    cin >> n;
    x = F(n);
    if (x == -1)
        cout << "Введено неверное число";
    else
        cout << x << endl;

    return 0;
}
