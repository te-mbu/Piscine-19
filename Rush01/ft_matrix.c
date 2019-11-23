/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmehadji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 16:59:03 by lmehadji          #+#    #+#             */
/*   Updated: 2019/11/11 09:55:42 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	init_tab(int tab[4][4])
{
	int	x;
	int	y;

	x = -1;
	while (++x < 4)
	{
		y = -1;
		while (++y < 4)
			tab[x][y] = 0;
	}
}

void	ft_matrix(int tab[][4])
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putchar(tab[i][j] + 48);
			if (j < 3)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	message_error(void)
{
	char	*message;
	int		i;

	message = "ERROR\n";
	i = -1;
	while (message[++i])
		ft_putchar(message[i]);
}
