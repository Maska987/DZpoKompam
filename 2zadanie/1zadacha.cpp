#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    cout << "������: " << rand() % 6 + 1 << " � " << rand() % 6 + 1 << endl;

    return 0;
}