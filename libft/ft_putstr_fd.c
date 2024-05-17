/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:46:25 by ancuesta          #+#    #+#             */
/*   Updated: 2024/05/17 18:27:33 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putstr_fd(char *s, int fd)
{
    size_t  len;
    len = 0;
    while(s[len] != '\0')
        len++;
    write(fd, s, len);
}