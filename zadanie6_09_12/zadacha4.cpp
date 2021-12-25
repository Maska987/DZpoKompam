#include <iostream>
#include "matrix_funcs.h"

using namespace std;

void search_min_positive(int** matrix, int rows, int cols, int& r, int& c)
{
	r = 0; c = 0;

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			if (matrix[i][j] < matrix[r][c] && matrix[i][j] > 0)
			{
				r = i; c = j;
			}
}

int main()
{
	srand(time(NULL));

	int A_rows = 3, A_cols = 3;

	int** A = create_matrix(A_rows, A_cols);
	random_matrix(A, A_rows, A_cols);
	print_matrix(A, A_rows, A_cols);

	cout << endl;

	int r, c;
	search_min_positive(A, A_rows, A_cols, r, c);

	// меняем местами строку и столбец
	for (int i = 0; i < A_cols; i++)
		swap(A[r][i], A[i][c]);

	print_matrix(A, A_rows, A_cols);

	delete_matrix(A, A_rows, A_cols);
	return 0;
}
