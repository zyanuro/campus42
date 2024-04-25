/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:20:51 by ancuesta          #+#    #+#             */
/*   Updated: 2024/02/14 20:16:32 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	aux;

	i = 0;
	aux = 1;
	while (str[i] != '\0')
	{
		if (aux == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (aux == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			aux = 1;
		else
			aux = 0;
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char str[] = "4alut, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	write(1, &str, 61);
	return (0);
}*/
