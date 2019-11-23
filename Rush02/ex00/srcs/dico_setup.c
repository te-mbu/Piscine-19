/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dico_setup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:17:09 by tembu             #+#    #+#             */
/*   Updated: 2019/11/17 21:55:01 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

long int		len_dico(void)
{
	long int	fd;
	long int	len;
	long int	i;
	char		buf[BUF_SIZE + 1];

	len = 0;
	fd = open("dico/dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error");
		ft_putchar('\n');
		return (0);
	}
	while ((i = read(fd, buf, BUF_SIZE)))
	{
		buf[i] = '\0';
		len += i;
	}
	if (close(fd) == 1)
	{
		ft_putstr("Error");
		ft_putchar('\n');
		return (0);
	}
	return (len);
}

char			*dic_to_string(long int len)
{
	int			fd;
	int			i;
	char		*dest;

	dest = malloc(sizeof(char) * len);
	if (!dest)
		return (NULL);
	fd = open("dico/dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error");
		ft_putchar('\n');
		return (0);
	}
	while ((i = read(fd, dest, len)))
		dest[len] = '\0';
	if (close(fd) == 1)
	{
		ft_putstr("Error");
		ft_putchar('\n');
	}
	return (dest);
}
