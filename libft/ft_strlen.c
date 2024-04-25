/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:28:52 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/25 13:27:12 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	ft_strlen(const char *s)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}

/*int main()

{
	 char str[] = "hola";
	 int tester_ft;
	 int tester;

	 tester_ft = ft_strlen(str);
	 tester = strlen(str);
	 printf("%d - %d", tester_ft, tester);
return 0;
}*/
