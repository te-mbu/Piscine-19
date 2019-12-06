/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 10:07:24 by exam              #+#    #+#             */
/*   Updated: 2019/11/22 10:10:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int			main(int argc, char **argv)
{
	if (argc >= 2)
	{
		ft_putstr(argv[argc - 1]);
	}
	write(1, "\n", 1);
	return (0);
}
