/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tembu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:18:51 by tembu             #+#    #+#             */
/*   Updated: 2019/11/17 19:48:28 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

void		write_nb(char *str, char **chaine)
{
	int i;
	int j;
	int check;

	i = 0;
	check = 1;
	while (chaine[i] && check == 1)
	{
		if (str[0] == chaine[i][0])
		{
			j = 0;
			while (str[j] == chaine[i][j])
			{
				if (j == ft_strlen(str))
				{
					ft_putstr(chaine[i + 1]);
					ft_putchar(' ');
					check = 0;
				}
				j++;
			}
		}
		i += 2;
	}
}

void		write_nb_len_one(char c, char **chaine)
{
	int i;

	i = 0;
	while (chaine[i])
	{
		if (c == chaine[i][0])
		{
			ft_putstr(chaine[i + 1]);
			ft_putchar(' ');
			return ;
		}
		i += 2;
	}
}
