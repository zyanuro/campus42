/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:16:26 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/25 13:08:49 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int main()
{
	int tester_ft; 
	int tester;

	tester_ft = ft_isalnum('.');
	tester = isalnum('.'); 
	printf("Mi funcin devuelve: %d -y la verdadera %\nd", tester_ft, tester);
}*/
