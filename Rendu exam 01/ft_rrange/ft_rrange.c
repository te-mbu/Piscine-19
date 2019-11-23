/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 19:29:29 by exam              #+#    #+#             */
/*   Updated: 2019/11/08 19:39:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *tab;
	int size;
	int min_size;
	int i;

	i = 0;
	size = end - start + 1;
	min_size = start - end + 1;
	if (start < end)
	{
		tab = malloc(sizeof(int) * size);
		if (!tab)
			return (NULL);
		while (i < size)
		{
			tab[i] = end;
			i++;
			end--;
		}
		return (tab);
	}
	else if (end < start)
	{
		tab = malloc(sizeof(int) * min_size);
		if (!tab)
			return (NULL);
		while (i < min_size)
		{
			tab[i] = end;
			end++;
			i++;
		}
		return (tab);
	}
	else if (end == start)
	{
		tab = malloc(sizeof(int) * 1);
		if (!tab)
			return (NULL);
		tab[i] = end;
		return (tab);
	}
	return (0);
}
