/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:38:16 by sfarren           #+#    #+#             */
/*   Updated: 2024/02/04 20:38:23 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define S 4   // S = SIZE
#define C 576 // C = COMBS

int		matrix_jl(int matrix[4][4], int *input);
void	ft_insertdict(int *dict);
void	ft_storeargs(char **av, int *input, int *dict);
int		ft_a(int puzzle[S][S], int dict[23], char **av, int sol[C][S][S]);

int	ft_isvalid(int puzzle[S][S], int *rowcol, int num)
{
	int	i;
	int	row;
	int	col;

	row = rowcol[0];
	col = rowcol[1];
	i = 0;
	while (i < S)
	{
		if (puzzle[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < S)
	{
		if (puzzle[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

void	ft_save(int puzzle[S][S], int solves[C][S][S], int *c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < S)
	{
		j = 0;
		while (j < S)
		{
			solves[*c][i][j] = puzzle[i][j];
			j++;
		}
		i++;
	}
	*c += 1;
}

void	ft_sp(int puzzle[S][S], int rowcol[2], int solves[C][S][S], int *c)
{
	int	num;
	int	nextrowcol[2];

	if (rowcol[0] == S)
	{
		ft_save(puzzle, solves, c);
		return ;
	}
	num = 1;
	while (num <= S)
	{
		if (ft_isvalid(puzzle, rowcol, num))
		{
			puzzle[rowcol[0]][rowcol[1]] = num;
			nextrowcol[0] = rowcol[0];
			nextrowcol[1] = (rowcol[1] + 1) % S;
			if (nextrowcol[1] == 0)
				nextrowcol[0]++;
			ft_sp(puzzle, nextrowcol, solves, c);
			puzzle[rowcol[0]][rowcol[1]] = 0;
		}
		num++;
	}
}
