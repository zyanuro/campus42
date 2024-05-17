/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:34:23 by ancuesta          #+#    #+#             */
/*   Updated: 2024/05/17 18:35:41 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    int     i;
    i = 0;
    if (!s)
        return (NULL);
    str = malloc((strlen(s) + 1) * sizeof(char));
    if (!str)
        return (NULL);
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}