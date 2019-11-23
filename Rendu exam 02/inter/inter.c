/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 17:14:55 by exam              #+#    #+#             */
/*   Updated: 2019/11/15 17:21:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_doublon(char *str, int pos, char c)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

void		ft_inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j] && !ft_doublon(s1, i, s1[i]) && !ft_doublon(s2, j, s2[j]))
				ft_putchar(s1[i]);
			j++;
		}
		i++;
	}
}

int			main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}
