/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:38:31 by ancuesta          #+#    #+#             */
/*   Updated: 2024/05/17 17:39:37 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  count_s1;
    size_t  l;
    if((!s1) || (!set))
        return (NULL);
    count_s1 = 0;
    l = ft_strlen(s1) - 1;
        while (s1[count_s1] && ft_strchr(set, s1[count_s1]))
            count_s1++;
        while (s1[l] && ft_strchr(set, s1[l]) && l > count_s1)
            l--;
        return (ft_substr(s1, count_s1, l - count_s1 + 1));
}
/*int main()
{
    char const *s1 = “cadaena”;
    char const *set = “ca”;
    char *new_s = ft_strtrim(s1, set);
    printf(“%s”, new_s);
}*/