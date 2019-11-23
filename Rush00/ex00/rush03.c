/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 01:43:48 by tembu             #+#    #+#             */
/*   Updated: 2019/11/03 02:05:07 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int			parameter_check(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		ft_putstr("Please enter other parameters");
		return (0);
	}
	return (1);
}

void		ft_position(char start, char middle, char end, int x)
{
	int i;

	i = 0;
	ft_putchar(start);
	if (x != 1)
	{
		while (i < x - 2)
		{
			ft_putchar(middle);
			i++;
		}
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void		rush(int x, int y)
{
	int i;

	i = 0;
	if (parameter_check(x, y))
	{
		ft_position('A', 'B', 'C', x);
		while (i < y - 2)
		{
			ft_position('B', ' ', 'B', x);
			i++;
		}
		if (y != 1)
			ft_position('A', 'B', 'C', x);
	}
}
