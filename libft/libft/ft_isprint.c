/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:17:47 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/25 13:11:18 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int main()
{
	int tester_ft;
	int tester;
	tester_ft = ft_isprint(2);
	tester = isprint(2);
	printf("%d - %d", tester_ft, tester);
	return 0;
}*/
