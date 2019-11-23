/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 02:55:51 by tembu             #+#    #+#             */
/*   Updated: 2019/11/10 12:52:37 by tembu            ###   ########.fr       */
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
	int i;

	i = 0;
	if (argc >= 1)
	{
		while (i < argc - 1)
			i++;
		while (i >= 1)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i--;
		}
	}
}
