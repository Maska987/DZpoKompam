#include <iostream>
#include "matrix_funcs.h"

using namespace std;

int** multiply_matrixes(int** A, int** B, int A_rows, int A_cols, int B_cols)
{
	int C_rows = A_rows, C_cols = B_cols;
	int** C = create_matrix(C_rows, C_cols);

	for (int i = 0; i < C_rows; i++)
		for (int j = 0; j < C_cols; j++)
		{
			int s = 0;

			for (int t = 0; t < A_cols; t++)
				s += A[i][t] * B[t][j];

			C[i][j] = s;
		}

	return C;
}

int main()
{
	srand(time(NULL));

	int A_rows = 3, A_cols = 4; // A size
	int B_rows = A_cols, B_cols = 2; // B size

	int** A = create_matrix(A_rows, A_cols);
	random_matrix(A, A_rows, A_cols);
	print_matrix(A, A_rows, A_cols);

	cout << endl;

	int** B = create_matrix(B_rows, B_cols);
	random_matrix(B, B_rows, B_cols);
	print_matrix(B, B_rows, B_cols);


	int C_rows = A_rows, C_cols = B_cols;
	int** C = multiply_matrixes(A, B, A_rows, A_cols, B_cols);

	cout << endl;
	print_matrix(C, C_rows, C_cols);


	delete_matrix(A, A_rows, A_cols);
	delete_matrix(B, B_rows, B_cols);
	delete_matrix(C, C_rows, C_cols);
	return 0;
}
