/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:28:42 by ancuesta          #+#    #+#             */
/*   Updated: 2024/05/17 18:30:07 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putendl_fd(char *s, int fd)
{
    size_t  len;
    len = 0;
    while (s[len] != '\0')
        len++;
    write(fd, s, len);
    write(fd, "\n", 1);
}