/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:43:06 by ancuesta          #+#    #+#             */
/*   Updated: 2024/04/18 12:42:52 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')); 
}

/*int main()
{
	int tester;
	int testerM;
	testerM = ft_isalpha('a');
	tester = isalpha('a');
	printf("El numero es:%d - %d", testerM, tester);
return 0;
}*/

