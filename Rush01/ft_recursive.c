/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmehadji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:12:46 by lmehadji          #+#    #+#             */
/*   Updated: 2019/11/11 09:59:55 by tembu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int		solution_correct(int tab[][4], int *pov)
{
	int i;
	int cr[4];

	i = -1;
	while (++i < 15)
	{
		test(tab, cr, i);
		if (count(cr) != pov[i])
			return (0);
	}
	return (1);
}

int		number_conflict(int tab[][4], int c)
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			if (tab[i][c] == tab[i][j])
				if (c != j)
					return (1);
	}
	return (0);
}

void	add_column(int tab[][4], int pos, int *c)
{
	int i;

	i = -1;
	while (++i < 4)
		tab[i][pos] = c[i];
}

void	rm(int tab[][4], int pos)
{
	int i;

	i = -1;
	while (++i < 4)
		tab[i][pos] = 0;
}

int		solve(int tab[][4], int s[][12][4], int *pov, int pos)
{
	int i;

	if (pos > 1)
		if (number_conflict(tab, pos - 1))
			return (0);
	if (solution_correct(tab, pov))
		return (1);
	i = 0;
	while (pos < 4)
	{
		add_column(tab, pos, s[(pov[pos] - 1)][i]);
		if (solve(tab, s, pov, pos + 1))
			return (1);
		else
		{
			rm(tab, pos);
			i++;
			if (s[(pov[pos] - 1)][i][0] == 0)
				return (0);
		}
	}
	return (0);
}
