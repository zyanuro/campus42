#include <unistd.h>

int	validate(int a, int b, int matrix[4])
{
	int	left;
	int	right;

	left = 1;
	right = 1;
	if (matrix[1] > matrix[0])
		left++;
	if (matrix[2] > matrix[1] && matrix[2] > matrix[0])
		left++;
	if (matrix[3] > matrix[2] && matrix[3] > matrix[1] && matrix[3] > matrix[0])
		left++;
	if (matrix[2] > matrix[3])
		right++;
	if (matrix[1] > matrix[2] && matrix[1] > matrix[3])
		right++;
	if (matrix[0] > matrix[1] && matrix[0] > matrix[2] && matrix[0] > matrix[3])
		right++;
	if (a == left && b == right)
		return (0);
	return (99);
}

int	column_validation(int matrix[4][4], int rowleft[4], int rowright[4])

{
	int	matrix_res;
	int	res_col;
	int	a;
	int	b;
	int	i;

	i = 0;
	res_col = 0;
	matrix_res = 0;
	while (i < 4)
	{
		a = rowleft[i];
		b = rowright[i];
		res_col += validate(a, b, matrix[i]);
		i++;
	}
	return (res_col);
}

int	row_validation(int matrix[4][4], int colup[], int coldown[])

{
	int	res_row;
	int	a;
	int	b;
	int	i;
	int	m[4];

	i = 0;
	res_row = 0;
	while (i < 4)
	{
		a = colup[i];
		b = coldown[i];
		m[0] = matrix[0][i];
		m[1] = matrix[1][i];
		m[2] = matrix[2][i];
		m[3] = matrix[3][i];
		res_row += validate(a, b, m);
		i++;
	}
	return (res_row);
}

void	print_result(int matrix[4][4], int res_row, int res_col)

{
	char	matrix_out;
	int		i;
	int		j;

	matrix_out = 0;
	if (res_row == 0 && res_col == 0)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				matrix_out = matrix[i][j] + 48;
				write (1, &matrix_out, 1);
				j++;
			}
			write (1, "\n", 1);
			i++;
		}
	}
}

void	matrix_input(int matrix[4][4], int *input)
{
	int	colup[4];
	int	coldown[4];
	int	rowright[4];
	int	rowleft[4];
	int	result[3];

	result[2] = 0;
	while (result[2] < 16)
	{
		if (result[2] < 4)
			colup[result[2]] = input[result[2]];
		else if (result[2] < 8)
			coldown[result[2] - 4] = input[result[2]];
		else if (result[2] < 12)
			rowleft[result[2] - 8] = input[result[2]];
		else
			rowright[result[2] - 12] = input[result[2]];
		result[2]++;
	}
	result[0] = column_validation(matrix, rowleft, rowright);
	result[1] = row_validation(matrix, colup, coldown);
	print_result(matrix, result[0], result[1]);
}
