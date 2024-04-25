/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:38:41 by sfarren           #+#    #+#             */
/*   Updated: 2024/02/04 20:38:45 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define S 4   // S = SIZE
#define C 576 // C = COMBS

int		matrix_input(int matrix[4][4], int *input);
int		ft_isvalid(int puzzle[S][S], int *rowcol, int num);
void	ft_save(int puzzle[S][S], int solves[C][S][S], int *c);
void	ft_sp(int puzzle[S][S], int rowcol[2], int solves[C][S][S], int *c);

void	ft_insertdict(int *dict)
{
	int	i;

	i = 0;
	while (i < 7)
	{
		dict[i] = 0;
		i++;
	}
}

int	ft_strlen(char **av)
{
	int	i;

	i = 0;
	while (av[1][i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_storeargs(char **av, int *input, int *dict)
{
	if (dict[6] == 2 && ft_strlen(av) == 31)
	{
		while (av[1][dict[4]])
		{
			if (dict[4] % 2 == 0)
			{
				if (av[1][dict[4]] >= '1' && av[1][dict[4]] <= '4')
				{
					input[dict[5]] = av[1][dict[4]] - 48;
					dict[5]++;
				}
				else
				{
					write(1, "Error \n", 7);
					break ;
				}
			}
			dict[4]++;
		}
	}
	else
		write(1, "Error \n", 7);
}

int	ft_a(int puzzle[S][S], int dict[23], char **av, int sol[C][S][S])
{
	int	input[16];
	int	rowcol[2];

	rowcol[0] = 0;
	rowcol[1] = 0;
	ft_storeargs(av, input, dict);
	ft_sp(puzzle, rowcol, sol, &dict[1]);
	while (dict[0] <= 575)
	{
		dict[3] = matrix_input(sol[dict[0]], input);
		if (dict[3] == 1)
			return (0);
		dict[0]++;
	}
	if (dict[0] == 576)
		write(1, "Error\n", 6);
	return (1);
}

/*
dict[0] = counter;       dict[1] = matrix number(c);
dict[2] = i;             dict[3] = solve;
dict[4] = count_letter1; dict[5] = count_letter2
dict[6] = argc;
*/

int	main(int argc, char **argv)
{
	int	dict[7];
	int	solves[C][S][S];
	int	puzzle[S][S];

	ft_insertdict(dict);
	dict[6] = argc;
	ft_a(puzzle, dict, argv, solves);
	return (0);
}
